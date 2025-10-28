#include <iostream>





using namespace std;





int main() {


    int jumlah = 0; // Variabel untuk menyimpan hasil penjumlahan


    int bilanganGanjil = 1; // Bilangan ganjil pertama


    int i; // Looping counter





    cout << "Deret: ";





    // Looping 10 kali untuk 10 suku


    for (i = 1; i <= 10; ++i) {


        jumlah += bilanganGanjil; // Tambahkan bilangan ganjil ke total


        


        // Tampilkan bilangan dan simbol '+'


        cout << bilanganGanjil;


        if (i < 10) {


            cout << " + ";


        }


        


        bilanganGanjil += 2; // Naikkan ke bilangan ganjil berikutnya


    }





    cout << " = " << jumlah << endl;





    return 0;


}
