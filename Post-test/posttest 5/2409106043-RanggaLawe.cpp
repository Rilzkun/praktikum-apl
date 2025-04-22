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
5. Keluar
Masukkan opsi(1-5): )";
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
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    } while (pilihan != 5);

    return 0;
}