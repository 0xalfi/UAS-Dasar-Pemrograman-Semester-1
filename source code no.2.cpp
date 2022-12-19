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