#include <iostream>
#include <string>
using namespace std;

int main () {
	string nama;
	
	cout << " lebokno jenengmu : ";
	cin >> nama;
	int a = nama.length();
	for (int i = a; i >=0; i--) {
		cout << nama[i] ;
	}
	
}
