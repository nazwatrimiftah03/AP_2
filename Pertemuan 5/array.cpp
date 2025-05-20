#include <iostream> // header untuk c++
#include <string> // header untuk string
#include <array> //header untuk array 
using namespace std;

int main () {
    // Array Declaration & Initialization
    /* 2 Cara Membuat Array */

    // cara 1 : array kosong
    // string nama[5];

    // nama[0]="Alya";
    // nama[1]="Parul";
    // nama[2]="Syukron";
    // nama[3]="Aurick";
    // nama[4]="Dzakwan";

    // cara 2 : array yang langsung diisi
    // string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};
    // string nama[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; //ukuran otomatis

    // Ascending Element in Array
    // cout << nama[0] << endl; // akses elemen berdasarkan indeks
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // Menggunakan Looping
    // for(int i = 0; i < 5; i++) { // Loop untuk mengakses semua elemen
    //     cout << nama[i] << endl;
    // }

    // Descending element in array use looping
    // for (int i = 4; i >= 0; i--) { // Loop terbalik untuk descending
    //     cout << nama[i] << endl;
    // }



    // Multidimensional Array
    // 1 3 5
    // 2 4 6

    // int matrix[2][3] = {{1, 3, 5},{2, 4, 6}};
    // for(int i = 0; i < 2; i++) { // loop baris
    //     for(int j = 0; j < 3; j++) { // loop kolom
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int matrix[4][6] ={
    //     {1, 2, 3, 4, 5, 6},
    //     {7, 8, 9, 10, 11, 12},
    //     {13, 14, 15, 16, 17, 18},
    //     {19, 20, 21, 22, 23, 24}
    // };
    
    // for (int i = 0; i < 4; i++) { // 4 baris
    //     for (int j = 0; j < 6; j++) { // 6 kolom
    //         cout << matrix[i][j] << "\t"; // pakai \t biar rapi seperti tabel
    //     }
    //     cout << endl;
    // }



    // String (array of characters)
    // string nama = "kiel"; // String adalah array karakter
    // cout << nama[0] << endl; // Akses karakter berdasarkan indeks
    // cout << nama[2] << endl;

    // for (int i = 0; i < nama.length(); i++) { // Loop melalui karakter string
    //     cout << nama[i] << endl;
    // }
    

    // string s1 = "Hello"; 
    // string s2 = "World"; 

    /* 1. s1 = s2 */
    // s1 = s2;
    // cout << "s1 = " << s1 << endl;

    /* 2. s1 = s1 + s2 */
    // s1 = "Hello";  // reset nilai di s1
    // cout << "Hasil : " << s1 + s2 << endl;

    /* 3. s1. length() */
    // cout << s1.length() << endl; // Panjang string s1
    // cout << (s1 + s2).length() << endl; // Panjang gabungan string

    /* 4. s1.substr(n, m) */
    // cout << s1.substr(2, 3) << endl; // Substring dari indeks 2 sebanyak 3 karakter
    // cout << (s1 + s2).substr(5, 3) << endl;


    // Operator sizeof
    // int angka = 10; 
    // cout << sizeof(angka); // Ukuran dalam byte dari tipe data int

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai); // Ukuran total array (jumlah elemen * ukuran int)

    // string s = "Nazwa";
    // cout << sizeof(s); // Ukuran objek string (bisa bervariasi)


    // Array library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // Array statis dengan ukuran 5 float
    // cout << "Nilai : ";

    // for(int i = 0; i < nilai.size(); i++) { // Loop menggunakan ukuran array
    //     cout << nilai[i] << " ";
    // }

    // for (float n : nilai) { // Range-based for loop (lebih ringkas)
    //     cout << n << " ";
    // }
}
