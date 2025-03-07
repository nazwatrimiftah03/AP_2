#include <iostream> //header untuk c++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main() {

    string nama;
    char KOM,jenisKelamin;
    int NIM;
    float IP;
    
    /* ini untuk komen 
    beberapa baris*/

    cout << "Hello world" << endl;

    cout << "Masukkan nama Anda : ";
    cin.ignore();  
    getline(cin, nama);

    cout << "Masukkan KOM Anda : ";
    cin >> KOM;

    cout << "Masukkan IP Anda : ";
    cin >> IP;

    cout << "Masukkan NIM Anda : ";
    cin >> NIM;

    cout << "masukkan jenis kelamin (L/P): ";
    jenisKelamin = getche(): 

    /*untuk output*/
    cout << "\nData yang Anda masukkan:" << endl;
    cout << "Nama : " << nama << endl;
    cout << "KOM  : " << KOM << endl;
    cout << "IP   : " << IP << endl;
    cout << "NIM  : " << NIM << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter
    
    getch(); //karakter yang di ketik

    return 0;
}


