#include <iostream>
using namespace std;

int main(){
	int x;
	int *ptr;
	
	x = 10;
	ptr = nullptr;
	
	cout << "   Nilai x = " << x << endl;
	cout << "  Alamat x = " << &x << endl;
	cout << " Nilai ptr = " << ptr << endl;
	cout << "Nilai *ptr = " << *ptr << endl;
	
	cout << "\n\n";
	
}