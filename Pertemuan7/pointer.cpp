#include <iostream> //header untuk c++
using namespace std;

void penjumlahan(int a, int b){ //fungsi yang menerima nilai biasa
    cout << a + b << endl;
}

void penjumlahanPointer(int *a, int *b) { //fungsi untuk pointer
    *a += *b;
    cout << *a << endl;
}

int main () {
    system("CLS"); // Membersihkan layar

    // Pointer Deklaration
    int number = 35; // Variabel integer
    int *pointer_number = &number; // Deklarasi pointer 'pointer_number' yang menunjuk ke alamat 'number'

    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl; // Alamat 'number'
    // cout << "Isi variabel pointer_number = " << pointer_number << endl; // Alamat yang disimpan pointer
    // cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl; // Nilai di alamat yang ditunjuk
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl; // Alamat pointer itu sendiri

    // cout << endl;


    // Pointer Operation
    // *pointer_number = 25;
    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5}; // Deklarasi array
    int *pointer_num = num; // Pointer menunjuk ke elemen pertama array (num[0])
    
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[3] << endl; // Alamat elemen ke-4 (indeks 3)
    // cout << "Isi variabel pointer_num = " << pointer_num << endl; // Alamat num[0]
    // cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl; // Nilai num[0]
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl; // Alamat pointer itu sendiri
    // cout << endl;

    // *pointer_num += 5; // Menambahkan 5 ke nilai elemen pertama array (num[0] menjadi 1+5=6)
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;


    // Pointer in Paramater
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl; // Output: 5
    // cout << num2 << endl; // Output: 7
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl; // Output: 12 (karena num1 += num2 di fungsi)
    // cout << num2 << endl; // Output: 7
 

    // Pointer in Pointer
    // int score = 4;
    // int *pointer_score = &score; // Pointer menunjuk ke 'score'
    // int **ptr_pointer_score = &pointer_score; // pointer in pointer
    // cout << "Isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori pointer_score " << &ptr_pointer_score << endl;


    // Dynamic Pointer 
    int *ptr = new int; // Mengalokasikan memori baru untuk satu integer di heap, 'ptr' menunjuk ke sana
    *ptr = 30; // Menetapkan nilai 30 ke lokasi memori yang ditunjuk oleh 'ptr'
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;  // Output nilai dan alamat pointer itu sendiri

    delete ptr; //melepaskan memori yang dialokasikan secara dinamis oleh 'new'
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;
}   
