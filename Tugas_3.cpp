
#include <iostream>
using namespace std;

int main(){
	// Kota x = indeks;
	// Kota A = 0, kota B = 1, Kota C = 2, Kota D = 3;
	int jarak[4][4] = {
		{0, 10, 15, 20},
		{10, 0, 8, 10},
		{15, 8, 0, 5},
		{20, 10, 15, 0}
	};
	char kota[4] = {'A', 'B', 'C', 'D'};
	
	int kota1, kota2, kota3;
	cout << "=== Program Menghitung Jarak Kota ===\n";
	cout << "Terdapat kota 4 kota, yakni kota A (0), B (1), C (2), dan D (3)\n";
	cout << "Silahkan masukkan kota sesuai nomor kota yang ada\n";
	cout << "Masukkan kota asal: ";
	cin >> kota1;
	cout << "Masukkan kota tujuan 1: ";
	cin >> kota2;
	cout << "Masukkan kota tujuan 2: ";
	cin >> kota3;

	int totalJarak = jarak[kota1][kota2] + jarak[kota2][kota3];
	printf("Jarak kota %c -> %c -> %c = %d", kota[kota1], kota[kota2], kota[kota3], totalJarak);
	return 0;
}