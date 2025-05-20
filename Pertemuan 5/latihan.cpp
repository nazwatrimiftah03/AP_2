#include <iostream> // header untuk c++
using namespace std;

int main(){
    // penjumlahan matriks 2 x 2

    int matriks1[2][2]; //deklarasi matriks pertama
    int matriks2[2][2]; // deklarasi matriks kedua
    int hasil[2][2]; // deklrasi matriks hasil

    cout << "Matriks 1" << endl;
    for(int i = 0; i < 2; i++){ // Loop baris matriks 1
        for(int j = 0; j < 2; j++) { // Loop kolom matriks 1
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j]; // Input elemen matriks 1
        }
    }

    cout << "Matriks 2" << endl;
    for(int i = 0; i < 2; i++){ // Loop baris matriks 2
        for(int j = 0; j < 2; j++) { // Loop kolom matriks 2
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j]; // Input elemen matriks 2
        }
    }

    cout << "Hasil Penjumlahan " << endl;
    for(int i = 0; i < 2; i++){ //loop baris hasil
        for(int j = 0; j < 2; j++) { //loop kolom hasil
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; //penjumlahan elemen
            cout << hasil[i][j] << " "; //output elemen hasil
        }
        cout << endl; // Baris baru setelah setiap baris matriks
    }
}
