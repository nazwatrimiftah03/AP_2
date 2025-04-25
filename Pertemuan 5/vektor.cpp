#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector Declaration & Initialization
    vector<string> nama_karyawan = {"alya", "parul", "syukron", "aurick", "dzakwan"};

    // Menampilkan elemen secara ascending 
    cout << "Daftar Karyawan:" << endl;
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

    // Menampilkan elemen secara ascending 
    cout << "Daftar Karyawan " << endl;
    for (string karyawan : nama_karyawan) {
        cout << karyawan << endl;
    }

    // Menambahkan data ke vector
    nama_karyawan.push_back("Imam");

    // Menampilkan seluruh isi setelah penambahan
    cout << "Setelah Menambahkan 'Imam':" << endl;
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

    // Menghapus elemen terakhir
    nama_karyawan.pop_back();

    // Menghapus elemen ke-4
    if (nama_karyawan.size() > 3) {
        nama_karyawan.erase(nama_karyawan.begin() + 3);
    }

    // Menampilkan hasil akhir setelah penghapusan
    cout << "Setelah Penghapusan:" << endl;
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
}

}