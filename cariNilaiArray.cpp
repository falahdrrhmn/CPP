#include <iostream>
using namespace std;

int main(){
	int data[10];

	for (int i = 0; i < 10; i++){
		cout << "Masukkan nilai array index ke - " << i << endl;
		cin >> data[i] 	;
	}
	
	cout << "\nIsi nilai array adalah..."<<endl;
	for (int z = 0; z < 10; z++){
		cout << data[z] << endl;
	}
	
	//cari nilai maksimum dan minimum
	int min = 9000;
	int max = -9000;
	for (int per = 0; per < 10; per++){
		if (data[per] < min){
			min = data[per];
		}
		if (data[per] > max){
			max = data[per]; 
		}
	}
	
	cout << "Nilai maksimum adalah " << max << endl;
	cout << "Nilai minimum adalah " << min << endl;
	
	
	
	
	
	
	
	
}