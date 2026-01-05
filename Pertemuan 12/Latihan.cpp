#include <iostream>
#include <string>
using namespace std;

struct buku {
    string judul;
    string pengarang;
    int tahun;
};

int main() {
    buku buku1, buku2;

    cout << "Masukkan data Buku 1\n";
    cout << "Judul       : ";
    cin >> buku1.judul;
    cout << "Pengarang   : ";
    cin >> buku1.pengarang;
    cout << "Tahun Terbit: ";
    cin >> buku1.tahun;

    cout << "\nMasukkan data Buku 2\n";
    cout << "Judul       : ";
    cin >> buku2.judul;
    cout << "Pengarang   : ";
    cin >> buku2.pengarang;
    cout << "Tahun Terbit: ";
    cin >> buku2.tahun;

    cout << "\n=== Data Buku ===\n";
    cout << "Buku 1\n";
    cout << "Judul       : " << buku1.judul << endl;
    cout << "Pengarang   : " << buku1.pengarang << endl;
    cout << "Tahun Terbit: " << buku1.tahun << endl;

    cout << "\nBuku 2\n";
    cout << "Judul       : " << buku2.judul << endl;
    cout << "Pengarang   : " << buku2.pengarang << endl;
    cout << "Tahun Terbit: " << buku2.tahun << endl;

    return 0;
}
