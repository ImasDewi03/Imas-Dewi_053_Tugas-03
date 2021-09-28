#include <iostream>
using namespace std;
int main ()
{ 
	int bil1, bil2, pil;
	float hasil;
	string operasi;
	
	cout << "Pilih Operator Aritmatika"
	;cout << "1. Penjumlahan";
	cout << "2. Pengurangan";
	cout << "3. Perkalian";
	cout << "4. Pembagian";
	cout << "5. Modulo";
	cout <<endl;
	
	;cout << "Masukkan Pilihan :";
	cin >> pil;
	;cout << "Masukkan Bilangan Pertama :";
	cin >> bil1;
	;cout << "Masukkan Bilangan Kedua :";
	cin >> bil2;
	
	switch (pil)
	{
		case 1 : hasil = bil1+bil2;
		operasi = '+';
		;break;
		
		case 2 : hasil = bil1-bil2;
		operasi = '-';
		;break;
		
		case 3 : hasil = bil1*bil2;
		operasi = '*';
		;break;
		
		case 4 : hasil = bil1/bil2;
		operasi = '/';
		;break; 

		case 5 : hasil = bil1%bil2;
		operasi = '%';
		;break;
		
		default : 
		 cout << "Error"<<endl;
		 
		 
		 
	}
	
	cout <<""<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	
	
	
	
	return 0;
}
