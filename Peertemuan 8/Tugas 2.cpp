#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string kata = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
	
	string lower = kata;
	transform (lower.begin(),lower.end(), lower.begin(), ::tolower);
	
	string balikan = lower;
	reverse (balikan.begin(), balikan.end());
	
	cout << "Huruf Kecil: " << lower << endl;
	cout << "Dibalik :"  << balikan << endl;
}
