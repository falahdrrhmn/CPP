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
---- OPERATOR REFERNCE ----
 Nilai variabel b = 10
Alamat variabel b = 0x61ff04

nilai bptr = 0x61ff04
nilai *bptr = 10
```

<br>
<br>

## Node

Node adalah sebuah konsep dalam struktur data yang digunakan untuk menyimpan informasi. Node dapat dianggap sebagai sebuah kotak atau wadah yang berisi data. Setiap node memiliki dua bagian utama: data dan tautan.

- Data: Data dalam node adalah informasi yang ingin kita simpan. Misalnya, jika kita ingin membuat sebuah linked list untuk menyimpan angka-angka, maka data dalam setiap node bisa berupa angka tersebut.
- Tautan: Tautan dalam node adalah koneksi atau referensi ke node lain. Tautan ini memungkinkan kita untuk menghubungkan node-node menjadi struktur data yang lebih kompleks, seperti linked list atau tree. Dengan adanya tautan, kita bisa mengetahui bagaimana setiap node terhubung satu sama lain.

Contoh penggunaan node bisa ditemukan dalam linked list. Misalkan kita ingin membuat sebuah linked list untuk menyimpan daftar nama-nama. Setiap node dalam linked list akan memiliki dua bagian, yaitu data yang berisi nama dan tautan yang menghubungkannya ke node berikutnya.

Berikut adalah contoh sederhana penggunaan node dalam linked list dengan data nama:
```
// Definisi node
struct Node {
    string nama;
    Node* next;
};

// Contoh pembuatan node
Node* node1 = new Node();
node1->nama = "John";
node1->next = NULL;

Node* node2 = new Node();
node2->nama = "Jane";
node2->next = NULL;

// Menghubungkan node-node menjadi linked list
node1->next = node2;
```

Dalam contoh di atas, kita membuat dua node yang masing-masing berisi sebuah nama. Kemudian, kita menghubungkan kedua node tersebut sehingga membentuk linked list. Node pertama (node1) memiliki data "John" dan tautan ke node kedua (node2) yang berisi data "Jane".


<br>
<br>

Tentu! Berikut ini adalah penjelasan tentang struktur data dan contoh kode implementasinya menggunakan bahasa pemrograman C++.

1. **Array**:
   - Penjelasan: Array adalah struktur data linear yang menyimpan elemen-elemen dengan tipe data yang sama dalam urutan yang terindeks. Setiap elemen dapat diakses menggunakan indeks.
   - Contoh Kode:
     ```cpp
     const int SIZE = 5; // Ukuran array
     int arr[SIZE]; // Deklarasi array
     
     // Inisialisasi array
     for (int i = 0; i < SIZE; i++) {
         arr[i] = i + 1;
     }
     
     // Akses dan cetak elemen array
     for (int i = 0; i < SIZE; i++) {
         cout << arr[i] << " ";
     }
     ```

2. **Linked List**:
   - Penjelasan: Linked list adalah struktur data dinamis yang terdiri dari simpul-simpul yang terhubung satu sama lain melalui tautan. Setiap simpul (node) dalam linked list berisi data dan tautan ke simpul berikutnya.
   - Contoh Kode:
     ```cpp
     // Struktur simpul linked list
     struct Node {
         int data;
         Node* next;
     };
     
     // Fungsi untuk mencetak linked list
     void printLinkedList(Node* head) {
         Node* current = head;
         while (current != NULL) {
             cout << current->data << " ";
             current = current->next;
         }
     }
     
     // Contoh penggunaan linked list
     int main() {
         // Membuat simpul-simpul linked list
         Node* head = new Node();
         Node* second = new Node();
         Node* third = new Node();
         
         // Mengisi data dan mengatur tautan antara simpul-simpul
         head->data = 1;
         head->next = second;
         second->data = 2;
         second->next = third;
         third->data = 3;
         third->next = NULL;
         
         // Mencetak linked list
         printLinkedList(head);
         
         return 0;
     }
     ```

3. **Stack**:
   - Penjelasan: Stack adalah struktur data LIFO (Last-In-First-Out) di mana elemen terakhir yang dimasukkan menjadi elemen pertama yang dikeluarkan.
   - Contoh Kode:
     ```cpp
     const int MAX_SIZE = 5; // Ukuran stack
     int stack[MAX_SIZE];
     int top = -1; // Indeks atas stack
     
     // Fungsi untuk menambahkan elemen ke stack (push)
     void push(int value) {
         if (top < MAX_SIZE - 1) {
             top++;
             stack[top] = value;
         } else {
             cout << "Stack Overflow" << endl;
         }
     }
     
     // Fungsi untuk menghapus elemen dari stack (pop)
     void pop() {
         if (top >= 0) {
             top--;
         } else {
             cout << "Stack Underflow" << endl;
         }
     }
     
     // Fungsi untuk mengakses elemen teratas stack (top)
     int peek() {
         if (top >= 0) {
             return stack[top];
         } else {
             return -1; // Stack kosong
         }
     }
     
    

 // Contoh penggunaan stack
     int main() {
         push(1);
         push(2);
         push(3);
         cout << "Top: " << peek() << endl;
         pop();
         cout << "Top: " << peek() << endl;
         
         return 0;
     }
     ```

4. **Queue**:
   - Penjelasan: Queue adalah struktur data FIFO (First-In-First-Out) di mana elemen yang pertama dimasukkan menjadi elemen pertama yang dikeluarkan.
   - Contoh Kode:
     ```cpp
     const int MAX_SIZE = 5; // Ukuran queue
     int queue[MAX_SIZE];
     int front = 0; // Indeks depan queue
     int rear = -1; // Indeks belakang queue
     
     // Fungsi untuk menambahkan elemen ke queue (enqueue)
     void enqueue(int value) {
         if (rear < MAX_SIZE - 1) {
             rear++;
             queue[rear] = value;
         } else {
             cout << "Queue Overflow" << endl;
         }
     }
     
     // Fungsi untuk menghapus elemen dari queue (dequeue)
     void dequeue() {
         if (front <= rear) {
             front++;
         } else {
             cout << "Queue Underflow" << endl;
         }
     }
     
     // Fungsi untuk mengakses elemen pertama queue (front)
     int peek() {
         if (front <= rear) {
             return queue[front];
         } else {
             return -1; // Queue kosong
         }
     }
     
     // Contoh penggunaan queue
     int main() {
         enqueue(1);
         enqueue(2);
         enqueue(3);
         cout << "Front: " << peek() << endl;
         dequeue();
         cout << "Front: " << peek() << endl;
         
         return 0;
     }
     ```

5. **Tree**:
   - Penjelasan: Tree adalah struktur data hirarkis yang terdiri dari simpul-simpul yang terhubung. Setiap simpul dalam tree dapat memiliki anak simpul dan memiliki satu simpul di atasnya (parent).
   - Contoh Kode:
     ```cpp
     struct Node {
         int data;
         Node* left;
         Node* right;
     };
     
     // Fungsi untuk membuat simpul baru pada tree
     Node* createNode(int value) {
         Node* newNode = new Node();
         newNode->data = value;
         newNode->left = NULL;
         newNode->right = NULL;
         return newNode;
     }
     
     // Contoh penggunaan tree
     int main() {
         // Membuat simpul-simpul tree
         Node* root = createNode(1);
         Node* leftChild = createNode(2);
         Node* rightChild = createNode(3);
         
         // Mengatur tautan antara simpul-simpul
         root->left = leftChild;
         root->right = rightChild;
         
         return 0;
     }
     ```

6. **Graph**:
   - Penjelasan: Graph adalah struktur data yang terdiri dari simpul-simpul yang terhubung dalam bentuk jaringan.
   - Contoh Kode (Graph dengan representasi adjacency list):
     ```cpp
     #include <iostream>
     #include <vector>
     
     using namespace std;
     
     // Fungsi untuk menambahkan edge antara dua simpul
     void addEdge(vector<int> adj[], int

 u, int v) {
         adj[u].push_back(v);
         adj[v].push_back(u);
     }
     
     // Fungsi untuk mencetak graph
     void printGraph(vector<int> adj[], int V) {
         for (int v = 0; v < V; ++v) {
             cout << "Adjacency list of vertex " << v << ": ";
             for (auto x : adj[v]) {
                 cout << x << " ";
             }
             cout << endl;
         }
     }
     
     // Contoh penggunaan graph
     int main() {
         int V = 5; // Jumlah vertex
         vector<int> adj[V]; // Array adjacency list
         
         addEdge(adj, 0, 1);
         addEdge(adj, 0, 4);
         addEdge(adj, 1, 2);
         addEdge(adj, 1, 3);
         addEdge(adj, 1, 4);
         addEdge(adj, 2, 3);
         addEdge(adj, 3, 4);
         
         printGraph(adj, V);
         
         return 0;
     }
     ```

7. **Hash Table**:
   - Penjelasan: Hash table adalah struktur data yang menggunakan fungsi hash untuk menyimpan dan mengakses elemen secara efisien.
   - Contoh Kode (Hash table menggunakan array):
     ```cpp
     #include <iostream>
     #include <vector>
     
     using namespace std;
     
     const int TABLE_SIZE = 10;
     
     // Fungsi hash
     int hashFunction(int key) {
         return key % TABLE_SIZE;
     }
     
     // Struktur data untuk elemen hash table
     struct HashNode {
         int key;
         int value;
     };
     
     // Class hash table
     class HashTable {
     private:
         vector<HashNode*> table;
     
     public:
         HashTable() {
             table.resize(TABLE_SIZE, NULL);
         }
     
         // Fungsi untuk menambahkan elemen ke hash table
         void insert(int key, int value) {
             int index = hashFunction(key);
             HashNode* newNode = new HashNode();
             newNode->key = key;
             newNode->value = value;
             table[index] = newNode;
         }
     
         // Fungsi untuk mengakses nilai berdasarkan kunci
         int get(int key) {
             int index = hashFunction(key);
             if (table[index] != NULL) {
                 return table[index]->value;
             } else {
                 return -1; // Tidak ditemukan
             }
         }
     };
     
     // Contoh penggunaan hash table
     int main() {
         HashTable ht;
         ht.insert(1, 10);
         ht.insert(2, 20);
         ht.insert(3, 30);
         cout << ht.get(2) << endl;
         
         return 0;
     }
     ```

Itulah contoh kode implementasi dari beberapa struktur data dasar. Setiap contoh di atas memberikan gambaran tentang bagaimana struktur data dapat diimplementasikan menggunakan bahasa pemrograman C++. Anda dapat mempelajari lebih lanjut tentang setiap struktur data dan berbagai operasi yang dapat dilakukan pada mereka untuk memperdalam pemahaman Anda.


## 
