#include <iostream> // header untuk c++
using namespace std;

int main() {
    int angka; // deklarasi variabel
    system("cls"); //membersihkan layar
    
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka; //inputan bil.bulat dan menyimpan di var.angka
    
if (angka % 10 == 0) { //memeriksa apakah angka habis dibagi 10
        cout << angka << " adalah kelipatan dari 10." << endl;
    } else if (angka % 5 == 0) { // Jika kondisi pertama salah, periksa apakah 'angka' habis dibagi 5
        cout << angka << " adalah kelipatan dari 5." << endl; / Jika ya, tampilkan pesan ini
    } else { // Jika kedua kondisi di atas salah
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl; // tampilan
    }

 return 0;
}
