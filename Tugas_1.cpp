#include <iostream>
using namespace std;

int main(){
	int n; 
	cout << "Masukkan banyak angka: ";
	cin >> n;
	int arr[n];
	// Mengambil input sebanyak n kali
	cout << "Masukkan daftar angka: ";
	for(int i = 0; i < n; ++i) cin >> arr[i];
	// Menampilkan array secara terbalik
	cout << "Menampilkan array secara terbalik: ";
	for(int i = n-1; i >= 0; --i) cout << arr[i] << " ";
	return 0;
}
