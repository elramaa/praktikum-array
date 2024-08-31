#include <iostream>
using namespace std;

int main(){
	// Deklarasi dan inisialisasi
	int nilai[5] = {85, 92, 78, 90, 88};
	int total = 0;

	// Menjumlahkan nilai ke dalam total
	for(int i = 0; i < 5; ++i) total += nilai[i];

	// Display nilai
	float rata_rata = (float)total / 5;
	cout << "Rata-rata nilai dalam array adalah: " << rata_rata;
	return 0;
}