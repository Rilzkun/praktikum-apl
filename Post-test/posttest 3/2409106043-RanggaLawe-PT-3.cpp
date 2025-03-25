#include <iostream>
using namespace std;

struct Pengguna {
    string nama, nim;
};

struct Lowongan {
    string posisi, perusahaan, tempat;
    double gaji;
};

const int MAX_LOWONGAN = 100;
Lowongan daftarLowongan[MAX_LOWONGAN];
int jumlahLowongan = 0;

Pengguna pengguna;
int kesempatan = 3;
int pilihan, index;

int main() {
    while (kesempatan > 0) {
        cout << "Masukkan Nama: ";
        cin >> pengguna.nama;
        cout << "Masukkan NIM (3 digit terakhir): ";
        cin >> pengguna.nim;
        
        if (pengguna.nama == "Rangga" && pengguna.nim == "043") {
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
Masukkan opsi(1-5): )";
        cin >> pilihan;
 
        switch (pilihan) {
            case 1:
                if (jumlahLowongan < MAX_LOWONGAN) {
                    index = jumlahLowongan;
                    cout << "Posisi: ";
                    cin >> daftarLowongan[index].posisi;
                    cout << "Perusahaan: ";
                    cin >> daftarLowongan[index].perusahaan;
                    cout << "Tempat: ";
                    cin >> daftarLowongan[index].tempat;
                    cout << "Gaji: ";
                    cin >> daftarLowongan[index].gaji;
                    jumlahLowongan++;
                    cout << "Lowongan ditambahkan!\n";
                } else {
                    cout << "Daftar lowongan penuh!\n";
                }
                break;

            case 2:
                if (jumlahLowongan > 0) {
                    for (int i = 0; i < jumlahLowongan; i++) {
                        cout << i + 1 << ". " << daftarLowongan[i].posisi << " - "
                             << daftarLowongan[i].perusahaan << " ("
                             << daftarLowongan[i].tempat << ") Rp"
                             << daftarLowongan[i].gaji << "\n";
                    }
                } else {
                    cout << "Tidak ada lowongan tersedia!\n";
                }
                break;

            case 3:
                if (jumlahLowongan > 0) {
                    cout << "Nomor lowongan: ";
                    cin >> index;
                    if (index > 0 && index <= jumlahLowongan) {
                        index--;
                        cout << "Posisi baru: ";
                        cin >> daftarLowongan[index].posisi;
                        cout << "Perusahaan baru: ";
                        cin >> daftarLowongan[index].perusahaan;
                        cout << "Tempat baru: ";
                        cin >> daftarLowongan[index].tempat;
                        cout << "Gaji baru: ";
                        cin >> daftarLowongan[index].gaji;
                        cout << "Lowongan diperbarui!\n";
                    } else {
                        cout << "Nomor tidak valid!\n";
                    }
                } else {
                    cout << "Tidak ada lowongan untuk diperbarui!\n";
                }
                break;

            case 4:
                if (jumlahLowongan > 0) {
                    cout << "Nomor lowongan: ";
                    cin >> index;
                    if (index > 0 && index <= jumlahLowongan) {
                        for (int i = index - 1; i < jumlahLowongan - 1; i++) {
                            daftarLowongan[i] = daftarLowongan[i + 1];
                        }
                        jumlahLowongan--;
                        cout << "Lowongan dihapus!\n";
                    } else {
                        cout << "Nomor tidak valid!\n";
                    }
                } else {
                    cout << "Tidak ada lowongan untuk dihapus!\n";
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
