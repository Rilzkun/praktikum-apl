#include <iostream>
using namespace std;

struct Lowongan {
    string posisi, perusahaan, tempat;
    double gaji;
};

const int MAX_KATEGORI = 4;
const int MAX_LOWONGAN = 100;

Lowongan daftarLowongan[MAX_KATEGORI][MAX_LOWONGAN];
int jumlahLowongan[MAX_KATEGORI] = {0};

string nama, nim;
int kesempatan = 3;
int pilihan, kategori, index;

int main() {
    while (kesempatan > 0) {
        cout << "Masukkan Nama: ";
        cin >> nama;
        cout << "Masukkan NIM: ";
        cin >> nim;
        
        if (nama == "Rangga" && nim == "2409106043") {
            cout << "Login berhasil!\n";
            break;
        } else {
            kesempatan--;
            cout << "Login gagal! Sisa percobaan: " << kesempatan << "\n";
        }
    }

    if (kesempatan == 0) {
        cout << "Anda gagal login 3 kali. Program berhenti.\n";
        return 0;
    }

    do {
        cout << R"(
1. Tambah Lowongan
2. Lihat Lowongan
3. Perbarui Lowongan
4. Hapus Lowongan
5. Keluar
Pilih: )";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << R"(
0. Entry-Level
1. Mid-Level
2. Senior-Level
3. Managerial
Pilih kategori: )";
                cin >> kategori;

                if (kategori >= 0 && kategori < MAX_KATEGORI && jumlahLowongan[kategori] < MAX_LOWONGAN) {
                    index = jumlahLowongan[kategori];
                    cout << "Posisi: ";
                    cin >> daftarLowongan[kategori][index].posisi;
                    cout << "Perusahaan: ";
                    cin >> daftarLowongan[kategori][index].perusahaan;
                    cout << "Tempat: ";
                    cin >> daftarLowongan[kategori][index].tempat;
                    cout << "Gaji: ";
                    cin >> daftarLowongan[kategori][index].gaji;
                    jumlahLowongan[kategori]++;
                    cout << "Lowongan ditambahkan!\n";
                } else {
                    cout << "Kategori tidak valid atau penuh!\n";
                }
                break;

            case 2:
                cout << R"(
0. Entry-Level
1. Mid-Level
2. Senior-Level
3. Managerial
Pilih kategori: )";
                cin >> kategori;

                if (kategori >= 0 && kategori < MAX_KATEGORI && jumlahLowongan[kategori] > 0) {
                    for (int i = 0; i < jumlahLowongan[kategori]; i++) {
                        cout << i + 1 << ". " << daftarLowongan[kategori][i].posisi << " - " 
                             << daftarLowongan[kategori][i].perusahaan << " (" 
                             << daftarLowongan[kategori][i].tempat << ") Rp" 
                             << daftarLowongan[kategori][i].gaji << "\n";
                    }
                } else {
                    cout << "Tidak ada lowongan di kategori ini!\n";
                }
                break;

            case 3:
                cout << R"(
0. Entry-Level
1. Mid-Level
2. Senior-Level
3. Managerial
Pilih kategori: )";
                cin >> kategori;

                if (kategori >= 0 && kategori < MAX_KATEGORI && jumlahLowongan[kategori] > 0) {
                    cout << "Nomor lowongan: ";
                    cin >> index;
                    if (index > 0 && index <= jumlahLowongan[kategori]) {
                        index--;
                        cout << "Posisi baru: ";
                        cin >> daftarLowongan[kategori][index].posisi;
                        cout << "Perusahaan baru: ";
                        cin >> daftarLowongan[kategori][index].perusahaan;
                        cout << "Tempat baru: ";
                        cin >> daftarLowongan[kategori][index].tempat;
                        cout << "Gaji baru: ";
                        cin >> daftarLowongan[kategori][index].gaji;
                        cout << "Lowongan diperbarui!\n";
                    } else {
                        cout << "Nomor tidak valid!\n";
                    }
                } else {
                    cout << "Kategori tidak valid atau kosong!\n";
                }
                break;

            case 4:
                cout << R"(
0. Entry-Level
1. Mid-Level
2. Senior-Level
3. Managerial
Pilih kategori: )";
                cin >> kategori;

                if (kategori >= 0 && kategori < MAX_KATEGORI && jumlahLowongan[kategori] > 0) {
                    cout << "Nomor lowongan: ";
                    cin >> index;
                    if (index > 0 && index <= jumlahLowongan[kategori]) {
                        for (int i = index - 1; i < jumlahLowongan[kategori] - 1; i++) {
                            daftarLowongan[kategori][i] = daftarLowongan[kategori][i + 1];
                        }
                        jumlahLowongan[kategori]--;
                        cout << "Lowongan dihapus!\n";
                    } else {
                        cout << "Nomor tidak valid!\n";
                    }
                } else {
                    cout << "Kategori tidak valid atau kosong!\n";
                }
                break;

            case 5:
                cout << "Keluar dari program.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    } while (pilihan != 5);

    return 0;
}
