<div align = "center">
  <h1> MASIH C++ </h1>
</div>

# 1. VECTOR

## Vector

std::vector adalah salah satu jenis kontainer yang disediakan oleh pustaka standar C++ (STL - Standard Template Library). Ini digunakan untuk menyimpan kumpulan elemen yang memiliki tipe data yang sama.

buat vector 

```cpp

#include <iostream>
#include <vector> // Header untuk vector
using namespace std;

int main() {
    // Membuat vector kosong
    vector<int> angka;

    // Menambahkan elemen ke vector
    angka.push_back(5);
    angka.push_back(10);
    angka.push_back(15);

    // Mengakses elemen vector
    cout << "Elemen pertama: " << angka[0] << endl;
    cout << "Elemen kedua: " << angka[1] << endl;
    cout << "Elemen ketiga: " << angka[2] << endl;

    return 0;
}

output : 
PS D:\sinau> c++ .\letstryy.cpp -o cobatryyy
PS D:\sinau> .\cobatryyy.exe
Elemen pertama : 5
Elemen kedua: 10
Elemen ketiga: 15


```

## 
