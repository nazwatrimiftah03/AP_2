#include <iostream> // header untuk c++
using namespace std;

int main() {
    system ("CLS"); //membersihkan layar
    string kalimat; // variabel untuk menyimpan kalimat
    
    cout << "Masukkan sebuah kalimat: "; // Tampilkan pesan input.
    getline(cin, kalimat); // baca inputan

    for (int i = 0; i < kalimat.length(); i++) { // Loop setiap karakter.
         // Cek apakah karakter adalah huruf vokal
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || 
            kalimat[i] == 'o' || kalimat[i] == 'u') {
            kalimat[i] = toupper(kalimat[i]); // ubah ke huruf kapital 
        }
    }
    cout << "Kalimat hasil perubahan: " << kalimat << endl; // tampilkan hasil
}