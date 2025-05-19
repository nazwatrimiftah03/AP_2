#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
};

int main(){
    
    mahasiswa mhs1;

    mhs1.nama="nazwa";
    mhs1.umur= 19;
    mhs1.ipk = 4.00;

    // cout<< "nama = "  << mhs1.nama<<endl;
    // cout<< "umur = "  << mhs1.umur<<endl;
    // cout<< "ipk = "  << mhs1.ipk<<endl;

    mahasiswa *ptrMhs= &mhs1;
    cout <<"nama=" << ptrMhs -> nama << endl;
    cout <<"umur=" << ptrMhs -> umur << endl;
    cout <<"ipk=" << ptrMhs -> ipk << endl;
}
