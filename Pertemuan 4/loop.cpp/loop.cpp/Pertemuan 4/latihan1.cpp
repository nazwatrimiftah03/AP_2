#include <iostream> // header untuk c++
using namespace std;

int main() {
    string kalimat; //deklrasi variabel string
    int i; //deklrasi var.integer untuk perulangan

    system("CLS");

    cout << "masukkan kalimat :"; // menampilkan pesan inputan
    getline (cin, kalimat);// membaca seluruh baris inputan

    //  n a z w a
    for(i = 0; i< kalimat.length(); i++) { // perulangan untuk setiap karakter
        kalimat[i] = toupper(kalimat[i]); //mengubah setiap karakter menjadi huruf kapital
    }

    cout <<"kalimat dalam huruf kapital :" <<kalimat << endl; //menampilkan kalimat dalam huruf kapital
    

}
