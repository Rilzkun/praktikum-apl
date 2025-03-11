#include <iostream>
using namespace std;

int main() {
    // string nama[4] = {"Haqi", "Dzaki", "Melchi"};
    // int angka[5];
    // angka[0] = 10;
    // angka[1] = 19;
    // angka[2] = 30;
    // angka[3] = 40;
    // angka[4] = 50;

    // cout << nama[0] << endl;
    // cout << angka[2] << endl;
    // int number[54] = {1, 2, 3, 4,};
    // int number[] = {0,1,2,3,4,5,6,7,8,9};
    // int number[9] = {1,2};
    // int number[2] = {1,2};
    // number[1] = 5;
    int number [3] = {1,2,4};

    int totalbyte = sizeof(number);
    int singlebyte = sizeof(number);
    int panjangArray = sizeof(number)/ sizeof(number[0]);
    int panjangArray2 = size(number);
    
    // cout << totalbyte << "/n"
    // << singlebyte << "n/"
    // << panjangArray;
    // cout << sizeof(number);
    // for (int i = 0; i < panjangArray; i++)
    // {
    // cout << "nilai array : "<< number[i] << endl;
    // }

    // nampilin
    for (int i : number)
    {
        cout << "nilai array " <<i << endl;
    }

    // hapus
    for (int i = 1; i < 3; i++)
    {
    cout << "nilai array : "<< number[i] << endl;
    number[i] = number [i + 1];
    number[1] = number [2];

    }


    for (auto i = 0; i < 2; i++)
    {
        
    }


    
    


    

    
    
    
    
    
    return 0;



}