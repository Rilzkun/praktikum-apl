#include <iostream>
using namespace std;

int main() {
    // cout << "Hello, World!" << endl;
    // cout << "Belajar C++ sangat seru😀"<<endl;
    // string nama = "rangga";
    // int umur = 20;
    // cout << "Halo, nama saya " << nama << " dan umur saya " << umur << "tahun";
    // string nama;
    // cout << "Masukkan nama kamu: ";
    // cin >> nama;
    // cout << "Halo, " << nama;
    // int a, b, hasil;
    // cout << "Masukkan nilai a: ";
    // cin >> a;
    // cout << "Masukkan nilai b: ";
    // cin >> b;
    // // Penjumlahan
    // hasil = a + b;
    // cout << "Hasil penjumlahan: " << hasil << endl;
    // // Pengurangan
    // hasil = a - b;
    // cout << "Hasil pengurangan: " << hasil << endl;
    // // Perkalian
    // hasil = a * b;
    // cout << "Hasil perkalian: " << hasil << endl;
    // // Pembagian
    // hasil = a / b;
    // cout << "Hasil pembagian: " << hasil << endl;
    //     // Modulus
    // hasil = a % b;
    // cout << "Hasil modulus: " << hasil << endl;
    // return 0;
    // }

    int nilaiUjian;
    cout << "Masukkan nilai: ";
    cin >> nilaiUjian;
    switch(nilaiUjian) {
    case 100:
    cout << "Nilai sempurna";
    break;
    case 90:
    cout << "Nilai sangat baik";
    break;
    case 80:
    cout << "Nilai baik";
    break;
    case 70:
    cout << "Nilai cukup";
    break;
    case 60:
    cout << "Nilai kurang";
    break;
    default:
    cout << "Nilai tidak valid";
    }
}    