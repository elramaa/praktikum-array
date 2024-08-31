#include <iostream>
using namespace std;

int main(){
	// Deklarasi dan inisialisasi
	int nilai[5] = {85, 92, 78, 90, 88};
	int maks = nilai[0];

	// Mencari nilai maks
	for(int i = 1; i < 5; ++i){
		// Membandingkan apabila lebih besar maka maks diperbarui
		if(nilai[i] > maks) maks = nilai[i];
	}

	cout << "Nilai maksimum dalam array adalah: " << maks;

	return 0;
}