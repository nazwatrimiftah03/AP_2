#include <iostream>
using namespace std;

// Struktuer Class
// class nama_class{
//     private:
//         anggota_private;
//     protected:
//         anggota_protected;
//     public:
//         anggota_public;
// };

class contoh_akses {
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        int publicVar;

// Constructor
    contoh_akses(){
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua(){
        cout << "Akses dari dalam data : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// kelas turunan 
class turunan : public contoh_akses { // class turunan bisa mewarisi semua atribut milik class contoh_akses
    public:
void aksesProtected(){
            cout << "Akses publicVar : " << publicVar << endl;
            cout << "Akses protectedVar : " << protectedVar << endl;
            // cout << "Akses privateVar : " << privateVar << endl; Akan error, karena hanya bisa diakses oleh class parent
        }
};

int main(){
    contoh_akses objek;
    objek.tampilkanSemua();

    cout << "\nAkses dari luar class : " << endl;
    // cout << objek.privateVar << endl; // Akan error
    // cout << objek.protectedVar << endl; // Akan error
    cout << objek.publicVar << endl; 

    turunan tur;
    tur.aksesProtected();
}