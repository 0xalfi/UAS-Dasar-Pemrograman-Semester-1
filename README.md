## Ujian Akhir Semester 1
<br>Mata Kuliah&ensp;&ensp; : Dasar Pemrograman
<br>Nama&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&nbsp;: Muhammad Alfiyan Nurwahibulloh Rohayana
<br>NIM&emsp;&emsp;&emsp;&emsp;&nbsp; : 1227050084
<br>Jurusan&emsp;&emsp;&emsp;: [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum No. 1

<p>Pada Ujian Akhir Semester Dasar Pemrograman No. 1, diberikan soal untuk membuat sebuah program di C++ Programming yaitu membuat Matriks yang telah ditukar setiap baris menjadi kolom dan setiap kolom menjadi baris dari Matriks yang belum ditukar. Pertama-tama, membuat variabel data_1 dan data_2 untuk memasukkan banyaknya data atau menampung data pada variabel arr dan membuat variabel baris dan kolom untuk menentukan baris dan kolom serta membuat variabel tukar yang akan digunakan untuk menukar baris dan kolomnya. Semua variabel di atas akan diinputkan oleh user. Setelah itu, membuat program for looping untuk menginputkan nilai data dan mengoutputnya. Kemudian melakukan program for looping kembali untuk melakukan program tukar baris dan kolom dan hasilnya disimpan pada variabel tukar. Setelah melakukan program tukar, terakhir menggunakan program for loop kembali untuk mengoutputkan semua nilai pada variabel data yang dimana baris dan kolomnya telah ditukar pada program for loop sebelumnya.</p>

## Source Code No. 1
```
#include <iostream>
using namespace std;

int main(){
	
	//prolog untuk soal no. 1
	cout << " -------------------------------------------------------- \n";
	cout << "              Ujian Akhir Semester 1 Dasar Pemrograman\n";
	cout << "                       Teknik Informatika             \n";
	cout << "                           Soal No. 1                 \n";
	cout << " -------------------------------------------------------- \n\n";
	
	//deklarasi variabel untuk input banyaknya data
	int data_1, data_2;
	cout << "masukkan banyaknya baris data ke-1: "; cin >> data_1;
	cout << "masukkan banyaknya kolom data ke-2: "; cin >> data_2;
	cout << "-------------------------------------\n";
	
	// deklarasi variabel untuk input baris, kolom, dan menampung data_1 & data_2
	int arr[data_1][data_2], tukar[data_1][data_2], baris, kolom;
	cout << "masukkan banyaknya baris: "; cin >> baris;
	cout << "masukkan banyaknya kolom: "; cin >> kolom;
	cout << "-------------------------------------\n";
	
	// for looping input nilai datanya
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << "array ke [" << i << "][" << j << "]: "; cin >> arr[i][j];
		}
	}
	
	cout << "-------------------------------------\n";
	cout << "Matriks sebelum ditukar atau transponse:\n";
	cout << "-------------------------------------\n";
	
	// for looping output nilai datanya menjadi matriks sebelum di transpose
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "-------------------------------------\n";
	cout << "Matriks setelah ditukar atau transpose:\n";
	cout << "-------------------------------------\n";
	
	// for looping untuk menyimpan variabel transpose atau tukar matriks
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			tukar[j][i] = arr[i][j];
		}
	}

	// for looping output matriks setelah ditranspose atau tukar;
	for (int i=0; i<kolom; i++){
		for (int j=0; j<baris; j++){
			cout << tukar[i][j] << endl;
		}
	}	
}
```

## Output No. 1

<img src="screenshot_source_code_UAS_no_1.png">


## Deskripsi Umum No. 2

<p>Pada Ujian Akhir Semester Dasar Pemrograman No. 2, diberikan soal untuk membuat sebuah program di C++ Programming yaitu membuat angka yang habis dibagi oleh 3, 5, atau 7. Pertama-tama, membuat variabel data_1 dan data_2 untuk memasukkan banyaknya data atau menampung data pada variabel arr dan membuat variabel baris dan kolom untuk menentukan baris dan kolom. Semua variabel di atas akan diinputkan oleh user. Setelah itu, membuat program for looping untuk menginputkan nilai data dan mengoutputnya. Kemudian melakukan program for looping kembali untuk melihat hasil matriks yang belum dibagi oleh 3,5, atau 7. Setelah itu terakhir menggunakan program for loop kembali (tidak matriks) untuk mengoutputkan semua nilai pada variabel arr yang dimana semua angka yang habis dibagi oleh 3, 5, atau 7 akan dioutput pada program.</p>

## Source Code No. 2
```
#include <iostream>
using namespace std;

int main(){
	
	//prolog untuk soal no. 2
	cout << " -------------------------------------------------------- \n";
	cout << "              Ujian Akhir Semester 1 Dasar Pemrograman\n";
	cout << "                       Teknik Informatika             \n";
	cout << "                           Soal No. 2                 \n";
	cout << " -------------------------------------------------------- \n\n";
	
	//deklarasi variabel untuk input banyaknya data
	int data_1, data_2;
	cout << "masukkan banyaknya baris data ke-1: "; cin >> data_1;
	cout << "masukkan banyaknya kolom data ke-2: "; cin >> data_2;
	cout << "-------------------------------------\n";
	
	// deklarasi variabel untuk input baris, kolom, dan menampung data_1 & data_2
	int arr[data_1][data_2], baris, kolom;
	cout << "masukkan banyaknya baris: "; cin >> baris;
	cout << "masukkan banyaknya kolom: "; cin >> kolom;
	cout << "-------------------------------------\n";
	
	// for looping input nilai datanya
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << "array ke [" << i << "][" << j << "]: "; cin >> arr[i][j];
		}
	}
	
	cout << "-------------------------------------\n";
	cout << "   Matriks array yang belum dibagi   \n";
	cout << "-------------------------------------\n";
	
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "-------------------------------------\n";
	cout << "Array yang habis dibagi 3, 5, atau 7 :\n";
	cout << "-------------------------------------\n";
	
	// for looping output nilai datanya yang habis dibagi 3, 5, dan 7
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			if(arr[i][j]%3==0 || arr[i][j]%5==0 || arr[i][j]%7==0) {
				cout << arr[i][j] << endl;
			}
		}
	}

}
```

## Output No. 2

![gambar](https://user-images.githubusercontent.com/70999423/208471293-ced63560-75a1-42b3-8e0b-af7dcd379ded.png)
