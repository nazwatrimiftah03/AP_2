#include <iostream> //header untuk c++
#include <cmath> //hedaer untuk fungsi matematika
#include "headerCustom.h" //Mengasumsikan ada file header kustom yang didefinisikan
using namespace std;

int jumlah (int a, int b) { // Fungsi untuk menjumlahkan dua bilangan bulat
    return a + b;
}

int kurang (int a, int b) { // Fungsi untuk mengurangkan dua bilangan bulat
    return a - b;
}

int main ()
{
    system ("CLS");

    int n; // Deklarasi variabel integer 'n'
    cout << jumlah (2,3) << endl;
    cout << kurang(2,3) << endl;

    double angka = 25.0 ; // Deklarasi dan inisialisasi variabel double
    double akar = sqrt (angka); // Menggunakan fungsi 'sqrt' dari <cmath> untuk menghitung akar kuadrat
    cout << "Akar kuadrat dari  " << angka << "adalah : " << akar << endl; // Menampilkan hasil akar kuadrat
    }
}