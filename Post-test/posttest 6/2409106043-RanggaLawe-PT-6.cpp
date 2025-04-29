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

void tambahLowongan(Lowongan daftar[], int &jumlah) {
    if (jumlah < MAX_LOWONGAN) {
        cout << "Posisi: ";
        cin >> daftar[jumlah].posisi;
        cout << "Perusahaan: ";
        cin >> daftar[jumlah].perusahaan;
        cout << "Tempat: ";
        cin >> daftar[jumlah].tempat;
        cout << "Gaji: ";
        cin >> daftar[jumlah].gaji;
        jumlah++;
        cout << "Lowongan ditambahkan!\n";
    } else {
        cout << "Daftar lowongan penuh!\n";
    }
}

void lihatLowongan(Lowongan *daftar, int jumlah) {
    if (jumlah > 0) {
        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << daftar[i].posisi << " - "
                 << daftar[i].perusahaan << " (" << daftar[i].tempat
                 << ") Rp" << daftar[i].gaji << "\n";
        }
    } else {
        cout << "Tidak ada lowongan tersedia!\n";
    }
}

void perbaruiLowongan(Lowongan daftar[], int jumlah) {
    int index;
    if (jumlah > 0) {
        cout << "Nomor lowongan: ";
        cin >> index;
        if (index > 0 && index <= jumlah) {
            index--;
            cout << "Posisi baru: ";
            cin >> daftar[index].posisi;
            cout << "Perusahaan baru: ";
            cin >> daftar[index].perusahaan;
            cout << "Tempat baru: ";
            cin >> daftar[index].tempat;
            cout << "Gaji baru: ";
            cin >> daftar[index].gaji;
            cout << "Lowongan diperbarui!\n";
        } else {
            cout << "Nomor tidak valid!\n";
        }
    } else {
        cout << "Tidak ada lowongan untuk diperbarui!\n";
    }
}

void hapusLowongan(Lowongan daftar[], int &jumlah) {
    int index;
    if (jumlah > 0) {
        cout << "Nomor lowongan: ";
        cin >> index;
        if (index > 0 && index <= jumlah) {
            for (int i = index - 1; i < jumlah - 1; i++) {
                daftar[i] = daftar[i + 1];
            }
            jumlah--;
            cout << "Lowongan dihapus!\n";
        } else {
            cout << "Nomor tidak valid!\n";
        }
    } else {
        cout << "Tidak ada lowongan untuk dihapus!\n";
    }
}

void urutkanLowongan(Lowongan daftar[], int jumlah) {
    int pilihan;
    cout << "\nUrutkan berdasarkan:\n";
    cout << "1. Posisi (A ke Z)\n";
    cout << "2. Gaji (Tertinggi ke Terendah)\n";
    cout << "3. Perusahaan (Z ke A)\n";
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: // Bubble Sort
            for (int i = 0; i < jumlah - 1; i++) {
                for (int j = 0; j < jumlah - i - 1; j++) {
                    if (daftar[j].posisi > daftar[j + 1].posisi) {
                        Lowongan sementara = daftar[j];
                        daftar[j] = daftar[j + 1];
                        daftar[j + 1] = sementara;
                    }
                }
            }
            cout << "Lowongan diurutkan berdasarkan posisi (A ke Z).\n";
            break;

        case 2: // Selection Sort
            for (int i = 0; i < jumlah - 1; i++) {
                int maks = i;
                for (int j = i + 1; j < jumlah; j++) {
                    if (daftar[j].gaji > daftar[maks].gaji) {
                        maks = j;
                    }
                }
                Lowongan sementara = daftar[i];
                daftar[i] = daftar[maks];
                daftar[maks] = sementara;
            }
            cout << "Lowongan diurutkan berdasarkan gaji (tertinggi ke terendah).\n";
            break;

        case 3: // Insertion Sort
            for (int i = 1; i < jumlah; i++) {
                Lowongan simpan = daftar[i];
                int j = i - 1;
                while (j >= 0 && daftar[j].perusahaan < simpan.perusahaan) {
                    daftar[j + 1] = daftar[j];
                    j--;
                }
                daftar[j + 1] = simpan;
            }
            cout << "Lowongan diurutkan berdasarkan perusahaan (Z ke A).\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
            break;
    }
}

int main() {
    Pengguna pengguna;
    int kesempatan = 3;
    int pilihan;

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
5. Urutkan Lowongan
6. Keluar
Masukkan opsi (1-6): )";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahLowongan(daftarLowongan, jumlahLowongan);
                break;
            case 2:
                lihatLowongan(daftarLowongan, jumlahLowongan);
                break;
            case 3:
                perbaruiLowongan(daftarLowongan, jumlahLowongan);
                break;
            case 4:
                hapusLowongan(daftarLowongan, jumlahLowongan);
                break;
            case 5:
                urutkanLowongan(daftarLowongan, jumlahLowongan);
                break;
            case 6:
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    } while (pilihan != 6);

    return 0;
}
