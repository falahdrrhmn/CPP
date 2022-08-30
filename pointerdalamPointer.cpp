#include <iostream>
using namespace std;

int main(){
	int x = 10;
	
	cout << "Nilai x = " << x << endl; // Nilai x = 10
	cout << "Alamat x = " << &x << endl; // Alamat x = 0x61ff04
	
	int *xptr; //deklarasi variabel pointer
	int **pptr; //pointer dalam pointer
	
	xptr = &x;
	pptr = &xptr;
	cout << "\n";
		
	cout << "Nilai *xptr = " << *xptr << endl; // Nilai *xptr = 10
	cout << "Nilai xptr = " << xptr << endl; //	Nilai xptr = 0x61ff04
	cout << "Nilai &xptr = " << &xptr << endl; 
	
	cout << "\n";
	
	cout << "Nilai pptr = " << pptr << endl;
	cout << "Nilai **pptr = " << **pptr << endl;
	cout << "Nilai *pptr = "<< *pptr << endl;
	
}