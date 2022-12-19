#include <iostream>
using namespace std;

int main(){
	
	//deklarasi variabel untuk output soal no. 1
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
			cout << tukar[i][j] << " ";
		}
		cout << endl;
	}	
}