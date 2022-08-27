<div align = "center">
  <h1> C++ Struktur Data </h1>
</div>

# 1. Pointer

## Operator Deference (&)

Deference (&) merupakan operator utk menyatakan alamat dari suatu variabel. cara menggunakan dengan memberikan simbol & pada suatu variabel
```cpp
int a = 5;
cout << "-------- OPERATOR DEFERENCE --------"<< endl;
cout << "Nilai variabel a adalah = " << a << endl;
cout << "Alamat variabel a adalah = " << &a << endl;

output:
-------- OPERATOR DEFERENCE --------
Nilai variabel a adalah = 5
Alamat variabel a adalah = 0x61ff08
```


## Operator Reference (*)
Reference (*) intinya menyatakan bawasannya suatu variabel merupakan variabel pointer. Operator	reference ini akan membuat suatu variabel pointer untuk menampung alamat.
```cpp
int b = 10;
cout << "---- OPERATOR REFERNCE ----" << endl;
cout << " Nilai variabel b = " << b << endl;
cout << "Alamat variabel b = " << &b << endl;
int *bptr;
	
cout << "\n";
	
bptr = &b;
cout << "nilai bptr = " << bptr << endl;
cout << "nilai *bptr = " << *bptr << endl;

output:
-------- OPERATOR REFERENCE --------
Nilai variabel b adalah 10
Alamat variabel b adalah 0x61ff04
Isi variabel b adalah 0x61ff04
Nilai yang tertampung dalam variabel b adalah 10
```
