#include<iostream> //header untuk cpp
#include<string> //header untuk tipe data string
#include<vector> //hedaer untuk penggunaan vector
using namespace std;

// Definisi struct Alamat untuk menyimpan informasi alamat
struct Alamat {
    string jalan; //nama jalan
    string kota; //nama kota
    int kodePos; // kode pos
};

// Definisi struct Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main () {
    system("CLS"); // Membersihkan layar
    // Mahasiswa mhs1; // Membuat objek mhs1

    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;
    
// Menggunakan vector untuk menyimpan banyak objek Mahasiswa
    vector<Mahasiswa> mahasiswa; // Deklarasi vector yang akan menyimpan objek Mahasiswa
    int n; // Variabel untuk menyimpan jumlah mahasiswa yang akan dimasukkan
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n; // Membaca jumlah mahasiswa dari user
    
// Loop untuk mengisi data setiap mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // Membersihkan buffer
        getline(cin, mhs1.nama); //untuk spasi

        cout << "Masukkan umur : "; //input umur
        cin >> mhs1.umur;

        cout << "Masukkan ipk : "; //input ipk
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); // Menambahkan objek mhsInput ke dalam vector

    }

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl; // Mencetak "Mahasiswa " diikuti nomor urutnya (mulai dari 1) lalu pindah baris
        cout << "Nama : " << mahasiswa[i].nama << endl; //mencetak nama mahasiswa
        cout << "Umur : " << mahasiswa[i].umur << endl; //umur
        cout << "IPK : " << mahasiswa[i].ipk << endl; // ipk
    }

}
