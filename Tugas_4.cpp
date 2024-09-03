#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<vector<int>> jarak{
		{0},
		{10},
		{15, 8},
		{20, 10, 5}
	};

	// Pengambilan input kota1, kota2, kota3
	// Kota A direpresentasikan 0, B -> 1, C -> 2, dan D -> 3
	int kota1, kota2, kota3;
	cin >> kota1 >> kota2 >> kota3;	

	// [kota1][kota2] bernilai sama dengan [kota2][kota1]
	// Sehingga untuk mengakses [kota2][kota1] dapat dilakukan swap untuk mengakses indeks yang tidak ada pada vektor
	// Misal, kita tidak dapat mengakses [0][4] tapi bisa mengakses [4][0] sehingga kita dapat menukarnya apabila kota1 lebih kecil dari kota2
	int temp = kota2;
	if(kota1 < kota2) swap(kota1, kota2);
	if(temp < kota3) swap(temp, kota3);

	// Apabila kedua kota merupakan kota yang sama, maka jaraknya adalah 0
	int jarak1 = (kota1 != kota2 ? jarak[kota1][kota2] : 0);
	int jarak2 = (temp != kota3 ? jarak[temp][kota3] : 0);

	// Tampilkan hasil penjumlahan jarak
	cout << jarak1 + jarak2;
	return 0;
}