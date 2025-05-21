#include <iostream> //header untuk c++
using namespace std;

int main () {
    int nilai; //deklarasi var.integer nilai

    system("CLS"); //membersihkan layar

    cout << "Masukkan nilai : ";
    cin >> nilai; //meminta inputan nilai dan menyimpannya

    // if statement
    // if (nilai <= 65) { //memeriksa apakah nilai kurang dari/sama dengan 65
    //     cout << "Anda tidak lulus!" << endl; // tampilan jika bener
    // }

    // if - else statement
    // if (nilai <= 65) { // Memeriksa apakah nilai kurang dari atau sama dengan 65
    //     cout << "Anda tidak lulus!" << endl; // tampilan
    // } else { // Jika kondisi di atas salah
    //     cout << "Anda lulus !" << endl; //tampilan
    // }

    // if - else - if statement
    // if (nilai == 100) { // Memeriksa apakah nilai sama dengan 100
    //     cout << "Anda Keceh" << endl;
    // } else if (nilai <= 65) { // Jika kondisi pertama salah, periksa apakah nilai kurang dari atau sama dengan 65
    //     cout << "Anda tidak lulus" << endl;
    // } else { // Jika kedua kondisi di atas salah
    //     cout << "Anda lulus" << endl;
    // }

    // nested if
    // if (nilai <= 65) { // Memeriksa apakah nilai kurang dari atau sama dengan 65
    //     cout << "Anda tidak lulus" << endl;
    // } else { // Jika kondisi pertama salah
    //     if (nilai == 100) { // Memeriksa apakah nilai sama dengan 100
    //         cout << "Anda lulus dan Anda Hebat" << endl;
    //     } else { // Jika kondisi nested if salah
    //         cout << "Anda lulus" << endl; // tampilan
    //     }
    // }

    // switch case
    // switch (nilai) { // Memeriksa nilai dari variabel 'nilai'
    //     case 1: //jika nilai 1
    //         cout << "Senin" << endl;
    //         break; // Keluar dari switch statement
    //     case 2: //jika nilai 2
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3: //jika nilai 3
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4: //jika nilai 4
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5: //jika nilai 5
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6: // jika nilai 6
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7: // jika nilai 6
    //         cout << "Minggu" << endl;
    //         break;
    //     default: // selain dari pernyataan yg ada
    //         cout << "Inputan tidak valid" << endl;
    //         break;
    // }

    // switch range
    // switch (nilai) {
    //     case 85 ... 100 : cout << "A" << endl; break; // jika nilai berada dalam rentang 85 hingga 100
    //     case 80 ... 84 : cout << "B+" << endl; break; // jika nilai berada dalam rentang 80 hingga 84
    //     case 75 ... 79 : cout << "B" << endl; break; // jika nilai berada dalam rentang 75 hingga 79
    //     case 70 ... 74 : cout << "C+" << endl; break; // jika nilai berada dalam rentang 70 hingga 74
    //     case 65 ... 69 : cout << "C" << endl; break; // jika nilai berada dalam rentang 65 hingga 69
    //     case 60 ... 64 : cout << "D" << endl; break; // jika nilai berada dalam rentang 60 hingga 64
    //     default: cout << "E" << endl; // kalo dh kurang kali...
    // }

    // Ternary Operator
    // if (nilai % 2 == 0) { //memeriksa apa habis dibagi 2
    //     cout << "Genap sih" << endl;
    // } else {
    //     cout << "Ganjil sih" << endl; // memeriksa apa tdk habis dibagi 2
    // }

    // a > 5 ? 9 : 6
    // string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // Menggunakan ternary operator untuk menentukan apakah bilangan genap atau ganjil
    // cout << nilai << " tuh Bilangan " << checkNum << " sih " << endl; // Menampilkan hasil menggunakan ternary operator
}
