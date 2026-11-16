#include <iostream>
using namespace std;

// void tambahNilai(int nilai) { //namanya parameter
//     nilai = 80;
//     cout << &nilai << endl;
// }

int tambahNilai(int *nilai) {
    *nilai = 100;
    cout << *nilai << endl;
    return 1;
}

int main() {

    int nilai = 100;
    cout << nilai << endl;
    tambahNilai(&nilai);
    int nilaiBaru = nilai;
    cout << nilai << endl;

    // int nilai = 100;
    // cout << nilai << endl;
    // tambahNilai(nilai); //namnya argumen
    // cout << &nilai << endl;

    //POINTER SEBAGAI PARAMETER FUNGSI



    // int nilai = 80;
    // int *ptr = &nilai;

    // cout << "Nilai: " << nilai << endl;
    // cout << "Alamat nilai: " << &nilai << endl;
    // cout << "Alamat pointer: " << &ptr << endl;
    // cout << "value pointer: " << ptr << endl;
    // cout << "value yang di tunjuk pointer: " << *ptr << endl;


    // int *ptr = nullptr;
    // int nilai = 80;
    // ptr = &nilai;

    // if(ptr != nullptr) {
    //     cout<< *ptr << endl;
    // }


    //POINTER DALAM STRUCT
    // struct Mahasiswa {
    //     string nim;
    //     string nama;
    //     double ipk;
    // };
    // Mahasiswa mhs;

    // Mahasiswa *ptr = &mhs;
    // ptr->nim = "123250050";
    // ptr->nama = "Zhinta";
    // ptr->ipk = 4.00;

    // cout << ptr -> nama << endl;




    return 0;
}