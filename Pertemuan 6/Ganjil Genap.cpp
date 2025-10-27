#include <iostream>
using namespace std;

int main() {
    int angka[10];
    int terbesar, terkecil;

    cout << "Masukkan 10 bilangan:" << endl;

    for (int i = 0; i <10; i++) {
        cout << "Nilai ke-" << i + 1 << " : ";
        cin >> angka[i];
    }


    cout << "\nBilangan Genap: " << endl;
    for (int i = 0; i < 10; i++) {
        if (angka[i] % 2 == 0) {
            cout << angka[i] << " ";
        }
    }
    
	 cout <<endl;
	 
    cout << "\nBilangan Ganjil: " << endl;
    for (int i = 0; i < 10; i++) {
        if (angka[i] % 2 != 0) {
            cout << angka[i] << " ";
        }
    }

    return 0;
}
