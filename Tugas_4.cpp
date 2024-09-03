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
	
	int kota1, kota2, kota3;
	cin >> kota1 >> kota2 >> kota3;	
	int temp = kota2;
	if(kota1 < kota2) swap(kota1, kota2);
	if(temp < kota3) swap(temp, kota3);
	int jarak1 = (kota1 != kota2 ? jarak[kota1][kota2] : 0);
	int jarak2 = (temp != kota3 ? jarak[temp][kota3] : 0);
	cout << jarak1 + jarak2;
	return 0;
}