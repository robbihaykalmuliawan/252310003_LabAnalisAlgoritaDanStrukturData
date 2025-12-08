#include <iostream>
#include <string>
using namespace std;

int hitungKarakter(string kalimat, char target) {
    int count = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == target) count++;
    }
    return count;
}

int main() {
    string kalimat;
    char karakter;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan karakter yang ingin dihitung: ";
    cin >> karakter;

    int jumlah = hitungKarakter(kalimat, karakter);

    cout << "Jumlah karakter '" << karakter << "' adalah: " << jumlah << endl;

    return 0;
}

