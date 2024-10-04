#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}
int kurang(int a, int b) {
    return a - b;
}
int kali(int a, int b) {
    return a * b;
}
int bagi(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
        return 0;
    }
}

int main() {
    int pilihan, angka1, angka2, hasil;

    cout << "Pilih operasi yang ingin dilakukan: " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;

    cin >> pilihan;
    cout << "Masukkan dua angka: ";
    cin >> angka1 >> angka2;

    switch(pilihan) {
        case 1:
            hasil = tambah(angka1, angka2);
            cout << "Hasil dari Penjumlahan untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
            break;
        case 2:
            hasil = kurang(angka1, angka2);
            cout << "Hasil dari Pengurangan untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
            break;
        case 3:
            hasil = kali(angka1, angka2);
            cout << "Hasil dari Perkalian untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
            break;
        case 4:
            hasil = bagi(angka1, angka2);
            cout << "Hasil dari Pembagian untuk " << angka1 << " dan " << angka2 << " adalah " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}
