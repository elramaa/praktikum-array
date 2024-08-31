#include <iostream>
using namespace std;

int main(){
	// Mengambil input ukuran matriks
	cout << "Masukkan ukuran matriks (n x m): ";
	int n, m; cin >> n >> m;		

	int matriks[n][m];
	// Mengambil input matriks
	cout << "Masukkan input matriks:\n";
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> matriks[i][j];
		}
	}
	
	// Menampilkan hasil transpose matriks
	cout << "Hasil transpose matriks:\n";
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			cout << matriks[j][i] << " ";
		}
		cout << "\n";
	}
	return 0;
}