#include <iostream>
#include <string>

using namespace std;

char hitungHurufMutu(float nilaiAkhir) {
    if (nilaiAkhir >= 85 && nilaiAkhir < 100) return 'A';
    else if (nilaiAkhir >= 80 && nilaiAkhir < 85) return 'B';
    else if (nilaiAkhir >= 75 && nilaiAkhir < 80) return 'C';
    else if (nilaiAkhir >= 70 && nilaiAkhir < 75) return 'D';
    else return 'E';
}

int main() {
    string nama;
    string npm;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    getline(cin, npm);
    cout << "Masukkan Nilai Absen: ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;


    nilaiAkhir = (nilaiAbsen * 0.10) + (nilaiTugas * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);


    hurufMutu = hitungHurufMutu(nilaiAkhir);


    cout << "\nNama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
