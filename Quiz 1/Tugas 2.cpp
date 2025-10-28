#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Masukkan jumlah suku deret Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci adalah: ";

    int count = 0;
    while (count < n) {
        // Cetak dua suku pertama secara manual untuk menghindari loop tak terbatas
        if (count <= 1) {
            next = count;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
        count++;
    }
    cout << endl;

    return 0;
}
