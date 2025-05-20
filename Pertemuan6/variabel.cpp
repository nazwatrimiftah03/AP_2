#include <iostream> //hedarer untuk c++
using namespace std;

string namaGlobal = "Ilmu"; //varibael global

void namaVariabel (){ //fungsi nama varibael
    string namaLokal = "Komputer"; //variabel lokal untuk fungsi 'namaVariabel'

    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main () {
    namaVariabel(); // Memanggil fungsi 'namaVariabel'

     // coba akses
    cout << namaGlobal << endl;

    // coba akses
    // cout << namaLokal << endl; // ga iso

}
