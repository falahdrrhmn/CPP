#include <iostream>
using namespace std;

int main(){
	//cara bikin array
	int data[10] = {12, 23, 34, 23, 12, 34};
	data[9] = 100; // karena diawalin index ke-0
	for (int i = 0; i < 10; i++){
		cout << data[i] << endl;
	}
	
	cout << "\n\n";
	
	//cari nilai bilangan terbesar dan terkecil dalam array

	int min = 900;
	int max = -900;
	
	for (int a = 0; a < 10; a++){
		if (data[a] > max){
			max = data[a];
		}
		if (data[a] < min){
			min = data[a];
		}
	}
	
	cout << "Nilai maksimum dari array adalah " << max << endl;
	cout << "Nilai minimum dari array adalah " << min << endl;
	
	
	
	
	
	
	
}