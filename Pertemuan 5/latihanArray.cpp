#include <iostream> //hedaer untuk c++
using namespace std;

int main(){
    // penjumlahan matriks 2 x 2

    int matriks1[2][2]; //matriks pertama
    int matriks2[2][2]; //matriks kedua
    int hasil[2][2]; //matriks untuk menyimpan hasil penjumlahan
//input elemen matriks 1
    cout << "Matriks 1" << endl;
//loop untuk baris 
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            //meminta pengguna memasukkan elemen matriks
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    }
//input elemen matrisk 2
    cout << "Matriks 2" << endl;
    for(int i = 0; i < 2; i++){
        //loop untuk kolom
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }
//menghitung dan menampilkan hasil
    cout << "Hasil Penjumlahan " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            //menjumlahkan elemen matriks dan menyimpannya
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
}
