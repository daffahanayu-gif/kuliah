#include <iostream> ;
using namespace std;

int main() {
    int a, b, c;
    int sum;
    cout<< "MASUKKAN NILAI A" << endl;
    cin>> a;
    cout<< "MASUKKAN NILAI B" << endl;
    cin>> b;
    cout<< "MASUKKAN NILAI C" <<endl;
    cin>> c;
    
    int max = a;
    if (b > max){
	max = b;
    };
	if(c > max){
	max = c;
	}
	
	cout<< "BILANGAN TERBESAR :";
	cout<< max;
}

