#include <iostream>
#include <string>
#include <array>
using namespace std;

int main () {
    system("cls");
    // array declaration & initialization
    // * 2 cara membuat array*/

    // cara 1 : array kosong
    string nama[5];

    nama[0] = "alya";
    nama[1] = "parul";
    nama[2] = "syukron";
    nama[3] = "audrick";
    nama[4] = "dzakwan";

    // cara 2 : array yang langsung diisi
    // string nama[5] = {"alaya", "parul", "syukron" ,"aurick", "dzakwan"}
    // string nama[5] = {"alaya", "parul", "syukron" ,"aurick", "dzakwan"}

    // ascending element in array
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
 // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // menggunakan looping
    // for (int i= 4; i>=0 ; i--){
    //     cout<<nama[i]<<endl;
    // }

    // menggunakan looping
    // for (int i= 4; i>=0 ; i--){
    //     cout<<nama[i]<<endl;
    // }



    // multidimensional array
    // 1 3 5
    // 2 4 6

    // int matrix[4][6] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    // for(int i = 0;i < 4;i++){
    //     for(int j = 0;j < 6;j++){
    //         cout << matrix[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // int matrix[2][3] = {{1,3,5},{2,4,6}};
    // for (int i = 0; i<2; i++){
    //     for (int j = 0; j<3; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
//     cout << endl;
    // }

    // string (array of characters) 
    // string nama = "Nazwa";
    // cout << nama [0] << endl;
    // cout << nama [2] << endl;

    // for (int i= 0; i< nama.lenght();i++){
    //     cout << nama[i] << endl;
    // }

    // string s1 ="Hello";
    // string s2 ="wordl";

    /* 1, s1 = s2*/
    // s1=s2;
    // cout << "s1 = " << s1<< endl;

    /* 2. s1 = s1 + s2*/
    // s1="hello"; //reset nilai di s1

    /* 3. s1. length()*/
    // cout << s1.length() << endl;
    // cout << (s1+s2).length()<< endl;

    /*4. s1.substr(n,m)*/
    // cout<<s1.substr(2,4)<<endl;
    // cout << (s1 +s2).substr(5,3) << endl;


    // operator sizeof
    // int angka =10;
// cout<< sizeof(angka);

    // int nilai [] ={10,20,30,40,50}
    // cout << sizeof(nilai);

    // string s = "Nazwa";
    // cout<< sizeof (s);


    // array liberary
    array<float, 5>nilai = {87.5,90,100,95.7,78.3};
    cout << "nilai : ";

    // for (int i = 0; i< nilai.size(); i++) {
    //     cout << nilai [i] << " ";
    // }

    // for (float n: nilai){
    //     cout << n<< " ";
    // }

}