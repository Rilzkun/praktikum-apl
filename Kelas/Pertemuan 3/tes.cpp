#include <iostream>
using namespace std;

struct tanggal{
    int hari;
    int bulan;
    int tahun;
};


struct mahasiswa{

    string nama;
    int nim;
    string gender;
    tanggal tanggalLahir;
};



int main(){

    mahasiswa mhsbaru;
    mahasiswa mhslama;
    
    mhsbaru.nama = "Rangga";
    mhsbaru.nim = 43;
    mhsbaru.gender = "lakik";
    mhsbaru.tanggalLahir.hari = 3;
    mhsbaru.tanggalLahir.bulan = 3;
    mhsbaru.tanggalLahir.tahun = 2006;

    cout << mhsbaru.nama << endl;
    cout << mhsbaru.nim << endl ;
    cout << mhsbaru.gender << endl ;

    cout << mhslama.nama << endl;

    cout << "Tanggal lahir : " << mhsbaru.tanggalLahir.hari <<  "/" << mhsbaru.tanggalLahir.bulan << "/" << mhsbaru.tanggalLahir.tahun << endl;

    string buah [5];
    mahasiswa mhsAbadi [5];
    mhsAbadi[0].nama = "ifnu";
    mhsAbadi[1].nama = "amad";
    mhsAbadi[2].nama = "ifnu";
    mhsAbadi[3].nama = "nashrul";
    mhsAbadi[4].nama = "rava";

    for (int i =0; i < size(mhsAbadi); i++){
        cout << mhsAbadi[i].nama << endl;
    }
    

    return 0;
    















}