#include <iostream>
using namespace std;

int main(){
	
	//bikin struct di c++
	struct{
		int num;
	} iniStructku;
	
	int data[10];
	
	for (int i = 0; i < 10; i++){
		cout << "Masukkan nilai array : ";
		cin >> iniStructku.num;
		data[i] = iniStructku.num;
	}
	
	for (int a = 0; a < 10; a++){
		cout << data[a] << endl;
	}
	
	int max, min, c;
	max = -900;
	min = 900;
	
	for (c = 0; c < 10; c++){
		if (data[c] > max){
			max = data[c];
		}
		if (data[c] < min){
			min = data[c];
		}
	}
	
	cout << "Nilai maximum : " << max << endl;
	cout << "Nilai minimum : " << min << endl;
	
	
	
	
}