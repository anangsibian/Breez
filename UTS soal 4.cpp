#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan Angka: ";
    cin >> angka;
    cout << "Bilangan Ganjil :" << endl;
    for (int i = 1; i < angka; i += 2) {
        cout << i << endl;
    }
    cout << "\nBilangan Genap :" << endl;
    for (int i = 0; i < angka; i += 2) {
        cout << i << endl;
    }

    return 0;
}
