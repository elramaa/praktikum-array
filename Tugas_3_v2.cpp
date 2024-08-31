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
	
	char kota1, kota2, kota3;
	cout << "=== Program Menghitung Jarak Kota ===\n";
	cout << "Terdapat kota 4 kota, yakni kota A, B, C, dan D\n";
	cout << "Masukkan kota asal: ";
	cin >> kota1;
	cout << "Masukkan kota tujuan 1: ";
	cin >> kota2;
	cout << "Masukkan kota tujuan 2: ";
	cin >> kota3;

	// Char code untuk A adalah 65, sehingga
	// A-65 = 0 (indeks A), B-65 = 1 (indeks B), C-65 = 2 (indeks C), D-65 = 3 (indeks D);
	int totalJarak = jarak[(int)kota1-65][(int)kota2-65] + jarak[(int)kota2-65][(int)kota3-65];
	printf("Jarak kota %c -> %c -> %c = %d", kota1, kota2, kota3, totalJarak);
	return 0;
}