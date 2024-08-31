#include <iostream>
using namespace std;

int main(){
	// Deklarasi dan inisialisasi
	int nilai[5] = {85, 92, 78, 90, 88};

	// Display nilai
	cout << "Array nilai sebelum penambahan: ";
	for(int i = 0; i < 5; i++) cout << nilai[i] << " ";
	
	// Mengubah nilai ke-3
	nilai[2] = 95;
	
	// Display array nilai setelah perubahan
	cout << "\nArray nilai setelah perubahan: ";
	for(int i = 0; i < 5; ++i) cout << nilai[i] << " ";
	return 0;
}