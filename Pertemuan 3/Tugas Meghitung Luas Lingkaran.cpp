#include <iostream>
using namespace std;

int main() 
{
    float r, luas;
    float pi = 3.14;

    cout << "Menghitung Luas Lingkaran\n\n";
    cout << "Masukkan jari-jari: ";
    cin >> r;

    luas = pi * r * r;

    cout << "Luas lingkaran: pi x r x r\n";
    cout << "pi = " << pi << endl;
    cout << "r = " << r << endl;
    cout << pi << " x " << r << " x " << r << endl;
    cout << "Hasil Luas Lingkaran = " << luas << endl;

    return 0;
}

