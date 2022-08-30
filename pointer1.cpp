#include <iostream>

using namespace std;

// Pointer merupakan variabel penunjuk yang berisi nilai yang menunjuk alamat dari suatu lokasi memori tertentu
// operator pointer

// operator deference
int main(){

    // operator deference (&)
    // deference (&) merupakan operator utk menyatakan alamat dari suatu variabel. cara menggunakan dengan memberikan simbol & pada suatu variabel. seperti ini contohnya
    int a = 5;
    cout << "-------- OPERATOR DEFERENCE --------"<< endl;
    cout << "Nilai variabel a adalah = " << a << endl;
    cout << "Alamat variabel a adalah = " << &a << endl;
    
    cout << "\n\n";

    // operator reference
    // reference (*) intinya menyatakan bawasannya suatu variabel merupakan variabel pointer. Operator	reference ini akan membuat suatu variabel pointer untuk menampung alamat.

    int b = 10; //memberikan nilai pada variabel b
    cout << "-------- OPERATOR REFERENCE --------" << endl;
    int *variabelPointer; //mendeklarasikan variabel variabelPointer sebagai pointer
    variabelPointer = &b; //copy alamat variabel b kedalam variabel variabelPointer

    cout << "Nilai variabel b adalah " << b << endl;
    cout << "Alamat variabel b adalah " << &b << endl;

    cout << "Isi variabel variabelPointer adalah " << variabelPointer << endl;
    cout << "Nilai yang tertampung dalam variabel variabelPointer adalah " << *variabelPointer << endl;
}