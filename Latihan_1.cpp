#include <iostream>
using namespace std;

int main(){
	// Deklarasi dan inisialisasi
	int nilai[5] = {85, 92, 78, 90, 88};

	// Display nilai
	cout << "Nilai dalam array nilai adalah: ";
	for(int i = 0; i < 5; i++) cout << nilai[i] << " ";
	return 0;
}