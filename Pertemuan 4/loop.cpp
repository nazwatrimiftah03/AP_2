#include <iostream> // header untuk c++
using namespace std;

int main() {
    // goto label
    // Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    // a:
    //     cout << "Hello World" << endl;
    //     goto d;
    // b:
    //     cout << "Fasilkom-TI" << endl;
    //     return 0;
    // c:
    //     cout << "Ilmu Komputer" << endl;
    //     goto b;
    // d:
    //     cout << "IKLC" << endl;
    //     goto c;

    // menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0) {
    //     cout << i << " ";
    // } i--;  

    // if (i >= 2) {
    //     goto genap;
    // }

    // Statement While
    // int i = 1;
    // while (i <= 10) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     } i++;
    // }

    // Statement Do-While
    // int i = 1;
    // do {
    //     cout << i << endl;
    // } while (i <= 0); // 1 <= 0 // kondisi false, loop jalan sekali

    // Statement for
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i+=2) {
    //     cout << "Hello World" << endl; // i = i + 2 //cetak hello wordl 5 kali
    // }
    
    // Nested for
    // ***** 5 x 5
    // for (int i = 1; i <= 5; i++) { // loop baris
    //     for (int j = 1; j <= 5; j++) { // loop kolom
    //         cout << "* ";
    //     }
    //     cout << endl; // baris baru
    // }

    // segitiga siku-siku
    // for(int i = 1; i <= 5; i++) { // loop baris
    //     for (int j = 1; j <= i; j++){ // loop kolom sesuai baris
    //         cout << "* ";
    //     }
    //     cout << endl; // baris baru
    // }
}