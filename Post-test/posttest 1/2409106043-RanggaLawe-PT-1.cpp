#include <iostream>
using namespace std;

int main(){
    string nama,password;
    string nama_benar = "rangga";
    string password_benar = "043";
    int percobaan;
    ;

    percobaan = 3;

    while(percobaan>0){
    cout<<"masukkan nama mu = ";
    cin>>nama;
    cout<<"masukkan passwordmu = ";
    cin>>password;
    
    if (nama == nama_benar && password == password_benar){
        cout<<"login berhasil";
        break;
    }
    else{
        percobaan--;
        cout<<"login gagal, kamu hanya bisa login sebanyak "<<percobaan<<" kali lagi\n";
        
        if(percobaan==0){
        cout<<"kamu di ban";
        return 0;
        }
    
    }

}


    
    double celcius,fahrenheit,reamur,kelvin,hasil1,hasil2,hasil3;
    int opsi;

    while(true){
        cout<<R"(
1. Konversi Celcius ke Fahrenheit, Reamur, dan Kelvin
2. Konversi Fahrenheit ke Celcius, Reamur, dan Kelvin
3. Konversi Reamur ke Celcius, Fahrenheit, dan Kelvin
4. Konversi Kelvin ke Celcius, Fahrenheit, dan Reamur
5. Keluar dari program)"<<endl;

        cout << "masukkan opsi(1-5) : ";
        cin >> opsi ;
        
        switch (opsi){
            
            case 1:
            cout<<"masukkan nilai celcius = ";
            cin>>celcius;
            hasil1= (celcius*9/5)+ 32;
            hasil2= celcius * 4/5;
            hasil3= celcius + 273.15;
            cout<<"celcius ke fahrenheit adalah = "<<hasil1<<endl;
            cout<<"celcius ke reamur adalah = "<<hasil2<<endl;
            cout<<"celcius ke kelvin adalah = "<<hasil3<<endl;
            break;

            case 2:
            cout<<"masukkan nilai fahrenheit = ";
            cin>>fahrenheit;
            hasil1= (fahrenheit-32)*5/9;
            hasil2= (fahrenheit-32)*5/9 + 273.15;
            hasil3= (fahrenheit-32)*4/9;
            cout<<"fahrenheit ke celcius adalah = "<<hasil1<<endl;
            cout<<"fahrenheit ke kelvin adalah= "<<hasil2<<endl;
            cout<<"fahrenheit ke reamur adalah  = "<<hasil3<<endl;
            break;

            case 3:
            cout<<"masukkan nilai reamur = ";
            cin>>reamur;
            hasil1= reamur*5/4;
            hasil2= (reamur*9/4) + 32;
            hasil3= (reamur*5/4) + 273.15;
            cout<<"reamur ke celcius adalah = "<<hasil1<<endl;
            cout<<"reamur ke fahrenheit adalah = "<<hasil2<<endl;
            cout<<"reamur ke kelvin adalah = "<<hasil3<<endl;
            break;

            case 4:
            cout<<"masukkan nilai kelvin = ";
            cin>>kelvin;
            hasil1= kelvin-273.15;
            hasil2= (kelvin-273.15) * 9/5 + 32;
            hasil3= (kelvin-273.15) *4/5;
            cout<<"kelvin ke celcius adalah = "<<hasil1<<endl;
            cout<<"kelvin ke fahrenheit adalah = "<<hasil2<<endl;
            cout<<"kelvin ke reamur adalah = "<<hasil3<<endl;
            break;

            case 5:
            cout<<"kamu telah keluar dari program!";
            return 0;
            
            default:
            cout<<"coba opsi lain";
            break;
        }
    }
}