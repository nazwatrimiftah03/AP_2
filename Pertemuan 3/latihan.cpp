#include <iostream> // header untuk input/output

using namespace std;

int main() {
    int angka; // deklarasi variabel integer
    cout << "Masukkan sebuah bilangan bulat: "; // tampilkan input prompt
    cin >> angka; // baca input dari user

    if (angka % 10 == 0) { // jika angka kelipatan 10
        cout << angka << " adalah kelipatan dari 10." << endl;
    } else if (angka % 5 == 0) { // jika angka kelipatan 5
        cout << angka << " adalah kelipatan dari 5." << endl;
    } else { // jika bukan kelipatan 5 atau 10
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl;
    }

    return 0; // keluar dari program
}
