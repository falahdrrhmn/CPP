#include <iostream>
using namespace std;

int main(){
    //operator deference (&)
	int a = 10;
	cout << "---- OPERATOR DEFERENCE ----" << endl;
	cout << " Nilai variabel a = " << a << endl;
	cout << "Alamat variabel a = " << &a << endl;
	
	cout << "\n\n";
	
	//operator reference
	int b = 10;
	cout << "---- OPERATOR REFERNCE ----" << endl;
	cout << " Nilai variabel b = " << b << endl;
	cout << "Alamat variabel b = " << &b << endl;
	int *bptr;
	
	cout << "\n";
	
	bptr = &b;
	cout << "nilai bptr = " << bptr << endl;
	cout << "nilai *bptr = " << *bptr << endl;
	
	cout << "\n\n";

	
}