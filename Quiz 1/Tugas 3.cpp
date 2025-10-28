#include <iostream>
using namespace std;

int main() {
    float nilai[5];
    float total = 0, rata;
    float max, min;


    cout << "Masukkan nilai ujian dari 5 mahasiswa:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    max = nilai[0];
    min = nilai[0];

    for (int i = 1; i < 5; i++) {
        if (nilai[i] > max)
            max = nilai[i];
        if (nilai[i] < min)
            min = nilai[i];
    }

    rata = total / 5;

    cout << "\nHasil Perhitungan" << endl;
    cout << "Nilai rata-rata : " << rata << endl;
    cout << "Nilai tertinggi : " << max << endl;
    cout << "Nilai terendah  : " << min << endl;

    cout << "Kategori rata-rata : ";
    if (rata > 80)
        cout << "Baik Sekali";
    else if (rata >= 70)
        cout << "Baik";
    else if (rata >= 60)
        cout << "Cukup";
    else if (rata <=60)
        cout << "Kurang"; 

    cout << endl;
}
