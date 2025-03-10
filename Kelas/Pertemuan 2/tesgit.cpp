#include <iostream>
using namespace std;

int main() {

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