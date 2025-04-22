#include <iostream>
using namespace std;


struct Orang{
    string nama;
    int umur; 
};
int main(){

    int primenumber[6]= {
        2,3,5,7,11,13

    };

    int (*ptrprimenumber)[] = &primenumber;

    for(int i = 0; i < 6; i++){

        cout<< (*ptrprimenumber)[1]<<endl;

    }
    

    cout << "Pointer yang menunjuk ";
    cout << "ke arah elemen array"<<endl;
    int b[5] = {1,2,3,4,5,};
    int *bPtr = b;
    for (int i = 0; i < 5; i++){
    cout << bPtr <<endl;
    // cout << *bPtr <<endl;
    bPtr++;
}

    int stack = 10;
    int* ptrstack = &stack;













    // Orang orang;
    // orang.nama = "kalingga";
    // orang.umur = 20;

    // Orang* orang2 = &orang;


    // cout<< orang.nama<<endl;
    // cout<< orang2->nama;

    


    



//     int stack = 64;
//     int stacksnowball = 16;

//     // int isi = stack;
//     // cout<< isi <<endl;
//     // cout<< stack<<endl;
//     // stack = 69;
//     int* isi = &stack;
//     // stack
//     // isi
//     // isi adlah pointer ke stck

//     cout<< *isi <<endl;
//     cout<< stack<<endl;

//     stack = 16;
//     cout<<"-----setelah diubah-----"<<endl;

//     cout<< *isi <<endl;
//     cout<< stack<<endl;

//    *isi = *isi +10;
//     cout<<"setelah var isi diubah"<<endl;

    
//     cout<< *isi <<endl;
//     cout<< stack<<endl;

// cout << "stack:" << stack<<endl;
// cout << "&stack: "<< &stack<< endl;

// cout << "snowball:" << stack<<endl;
// cout << "&stacksnowball: "<< &stacksnowball<< endl;


















    return 0;









}