#include <iostream> // header untuk c++
using namespace std;

int main() {
    string password, sandi, expected = ""; // deklarasi variabel string

    cout << "Masukkan kata sandi : "; //meminta input kata sandi
    cin >> password;

    cout << "Masukkan kata : "; //inputan kedua
    cin >> sandi;

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl; //output jika benar
    } else {
        cout << "Tulisan agen salah" << endl; //output jika salah
    }

    return 0;
}
