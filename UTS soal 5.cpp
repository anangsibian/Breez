#include <iostream>
using namespace std;

int main() {

    float berat_badan, tinggi_badan, imt;

    cout << "Masukkan berat badan (kg): ";
    cin >> berat_badan;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi_badan;

    imt = berat_badan / (tinggi_badan * tinggi_badan);

    cout << "Indeks Massa Tubuh (IMT) Anda: " << imt << endl;

    if (imt < 18.5) {
        cout << "Kategori: Berat Badan Kurang" << endl;
    } else if (imt >= 18.5 && imt <= 24.9) {
        cout << "Kategori: Berat Badan Ideal" << endl;
    } else if (imt >= 25 && imt <= 29.9) {
        cout << "Kategori: Berat Badan Lebih" << endl;
    } else if (imt >= 30 && imt <= 39.9) {
        cout << "Kategori: Gemuk" << endl;
    } else {
        cout << "Kategori: Sangat Gemuk" << endl;
    }

    return 0;
}
