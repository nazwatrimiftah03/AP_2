#include<iostream> //header untuk cpp
#include<string> //header untuk tipe data string
#include<vector>  //hedaer untuk penggunaan vector
using namespace std;

// Definisi struct Alamat untuk menyimpan informasi alamat
struct Alamat {
    string jalan;
    string kota;
    int kodePos;
};

// Definisi struct Mahasiswa
struct Mahasiswa {
    string nama; //menyimpan nama
    int umur; //menyimpan umur
    float ipk; // menyimpan
    Alamat alamat; // nested struct
};

int main () {
    system("CLS"); //membersihkan layar
    Mahasiswa mhs1; // Membuat objek mhs1

    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl; //menampilkan alamat

// Menggunakan vector untuk menyimpan banyak objek Mahasiswa
    vector<Mahasiswa> mahasiswa; // Deklarasi vector yang akan menyimpan objek Mahasiswa
    int n;
    cout << "Masukkan banyak mahasiswa : "; //deklarasi vektor
    cin >> n; // Membaca jumlah mahasiswa dari user //varibael untuk menyimpan jumlah mahasiswa

// loop untuk menginput data setiap mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // membaca (dan membuang) satu karakter dari buffer input
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama); // agar bisa spasi

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); // menambahkan objek mahasiswa yang sudah diisi ke dalam vector
    }

    for(int i = 0; i < n; i++){ // loop untuk menampilkan data setiap mahasiswa yang sudah diinput
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }

}
