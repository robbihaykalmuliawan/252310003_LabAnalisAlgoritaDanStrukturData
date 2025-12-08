#include <iostream>
using namespace std;

double konversiSuhu(double nilai, char dari, char ke) {
    double celcius;

    if (dari == 'C' || dari == 'c') {
        celcius = nilai;
    } else if (dari == 'F' || dari == 'f') {
        celcius = (nilai - 32) * 5.0 / 9.0;
    } else if (dari == 'K' || dari == 'k') {
        celcius = nilai - 273.15;
    } else {
        return -9999; 
    }

    if (ke == 'C' || ke == 'c') {
        return celcius;
    } else if (ke == 'F' || ke == 'f') {
        return celcius * 9.0 / 5.0 + 32;
    } else if (ke == 'K' || ke == 'k') {
        return celcius + 273.15;
    } else {
        return -9999; 
    }
}

int main() {
    char dari, ke;
    double nilai;

    cout << "Jenis suhu awal (C/F/K): ";
    cin >> dari;

    cout << "Nilai suhu: ";
    cin >> nilai;

    cout << "Konversi ke (C/F/K): ";
    cin >> ke;

    double hasil = konversiSuhu(nilai, dari, ke);

    if (hasil == -9999) {
        cout << "Jenis suhu tidak valid!" << endl;
    } else {
        cout << "Hasil konversi: " << hasil << endl;
    }

    return 0;
}

