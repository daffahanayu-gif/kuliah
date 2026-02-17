#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Masukkan Jumlah Jam Pelajaran Hari Ini : ";
	cin >> n;
	cin.ignore();//membuang karakter dari buffer input 
	
	string mapel[n];
	string guru[n];
	
	//input data jadwal
	for(int i = 0; i < n; i++) {
		cout << "\nJam ke-" << i+1 << endl;
		
		cout << "Mata pelajarann : ";
		getline(cin, mapel[i]);
		
		cout << "Nama guru       : ";
		getline(cin, guru[i]);
	}
	// Menampilkan Jadwal
	cout << "\n=== Jadwal Pelajaran Hari Ini ===\n";
	for(int i = 0; i< n; i++){
		cout << " Jam " << i+1 << " : "
			 << mapel[i] << " - " << guru[i] << endl;
	}
}
