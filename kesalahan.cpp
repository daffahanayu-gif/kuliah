#include <iostream>
using namespace std;

int main(){
	int bilangan;
	
	cout << "MASUKKAN SEBUAH BILANGAN BULAT = ";
	cin >> bilangan;
	
	if ( bilangan % 2 == 0) {
		cout << bilangan << " = adalah bilangan genap" << endl;	
	}
	else {
		cout << bilangan << " = adalah bilangan ganjil" << endl;
	}
}

// kesalahan 1 dibagian cin setelah bilangan harusnya ada titik koma
// kesalahan 2 samadengan harusnya 2
// kesalahan 3 terbalik antara cout genap dan ganjil
// kesalahan 4 ganti int dengan float
