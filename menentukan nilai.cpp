#include <iostream>
using namespace std;

int main() {
	int nilai;
	
	cout << " masukkan nilai anda : ";
	cin >> nilai;
	
	if (nilai >= 85 && nilai <= 100){
		cout << " Grade anda : A ";
		
	} else if (nilai >= 70 && nilai <85){
		cout << " Grade anda : B ";
		
	} else if (nilai >= 60 && nilai <70){
		cout << " Grade anda : C ";
		
	} else if (nilai >= 40 && nilai <60){
		cout << " Grade anda : D ";
	
	} else if (nilai >= 39 && nilai <=0) {
		cout << " Grade anda : E ";
		
	} else {
		cout << " Grade anda : tidak valid ";
	}
	
}
