#include <iostream> //header untuk c++
#include <vector> // header untuk vektor

using namespace std;

int main (){
    // Vector Declaration & Initialization
    vector<string> nama_kayawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; // Inisialisasi vector string

    // Ascending Element of Vector
    // for(int i = 0; i < nama_kayawan.size(); i++) { // Loop melalui elemen vector menggunakan indeks.
    //     cout << nama_kayawan[i] << endl;
    // }

    // for (string karyawan : nama_kayawan) { // Range-based for loop untuk setiap elemen
    //     cout << karyawan << endl;
    // }


    // Add data to Vector
    nama_kayawan.push_back("Imam"); // menambah elemen ke akhir vektor

    // for(int i = 0; i < nama_kayawan.size(); i++) { // Loop untuk menampilkan vector setelah penambahan
    //     cout << nama_kayawan[i] << endl;
    // }

    
    // Delete data from Vector
    nama_kayawan.pop_back(); // Menghapus elemen terakhir dari vector
    nama_kayawan.erase(nama_kayawan.begin() + 3); // Menghapus elemen pada indeks 3

    for(int i = 0; i < nama_kayawan.size(); i++) { // Loop untuk menampilkan vector setelah penghapusan
        cout << nama_kayawan[i] << endl;
    }
}
