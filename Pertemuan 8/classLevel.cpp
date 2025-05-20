#include <iostream> // Header untuk c++
using namespace std;

class ContohAkses {
    private:
        int privateVar; //hanya akses di dalam kelas ini
    
    protected:
        int protectedVar; //bisa di akses di dalam dan kelas turunannya

    public:
        int publicVar; //bisa di akses di mana saja

    // Constructor
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }
//fungsi untuk menampilkan semua variabel
    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};
//kelas turunan dari contohakses
class Turunan : public ContohAkses {
    public:
//fungsi untuk mengakses variabel dari kelas induk
    void aksesProtected() {
        cout << protectedVar << endl; // BISA: Akses protected dari turunan
        cout << publicVar << endl; // BISA: Akses public dari turunan
        // cout << privateVar << endl; // error : Tidak bisa akses private dari turunan
    }
};

int main () {
    ContohAkses obj; // Buat objek dari ContohAkses
    obj.tampilkanSemua(); // Tampilkan semua variabel dari dalam objek

    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl;  // error: tidak bisa akses private dari luar
    // cout << obj.protectedVar << endl; // error : tidak bisa akses protected dari luar
    cout << obj.publicVar << endl;

    cout <<"\nAkses dari kelas Turunan " << endl;
    Turunan tur; // Buat objek dari Turunan
    tur.aksesProtected(); // Tampilkan variabel yang bisa diakses turunan
}
}
