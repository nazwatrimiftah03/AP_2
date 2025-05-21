#include <iostream> //header untuk c++
#include <string> //untuk tipe data string
using namespace std;

struct mahasiswa{
    string nama; //string nma mahasiswa
    int umur;//umur mahasiswa
    float ipk; //ipk mahasiswa
};

int main(){
    
    mahasiswa mhs1; // objek mahasiswa
// data mahasiswa operator (.) karna variabel langsung
    mhs1.nama="nazwa";
    mhs1.umur= 19;
    mhs1.ipk = 4.00;

    // cout<< "nama = "  << mhs1.nama<<endl;
    // cout<< "umur = "  << mhs1.umur<<endl;
    // cout<< "ipk = "  << mhs1.ipk<<endl;
    
// Bikin pointer yang nunjuk ke alamat memori mhs1
    mahasiswa *ptrMhs= &mhs1;
// Akses data mhs1 LEWAT POINTER pakai operator panah (->)
    cout <<"nama=" << ptrMhs -> nama << endl;
    cout <<"umur=" << ptrMhs -> umur << endl;
    cout <<"ipk=" << ptrMhs -> ipk << endl;
}
