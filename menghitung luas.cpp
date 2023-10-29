#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float alas, tinggi, panjang, lebar, luas;

    cout << "Pilih bangun datar untuk menghitung luas: " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan: "; // pilih salah satu diantara 1 sampai 3
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan panjang sisi: ";
            cin >> panjang; // input panjang sisi
            luas = panjang * panjang;
            cout << "Luas persegi: " << luas << endl; // dihitung dengan rumus persegi
            break;
        case 2:
            cout << "Masukkan panjang: ";
            cin >> panjang; // input panjang
            cout << "Masukkan lebar: ";
            cin >> lebar; // input lebar
            luas = panjang * lebar;
            cout << "Luas persegi panjang: " << luas << endl; // dihitung dengan rumus persegi panjang
            break;
        case 3:
            cout << "Masukkan alas: ";
            cin >> alas; // input alas
            cout << "Masukkan tinggi: ";
            cin >> tinggi; // input tinggi
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga: " << luas << endl; // dihitung dengan rumus segitiga
            break;
        default:
            cout << "Pilihan anda tidak valid!" << endl; // jika memilih yang bukan diantara 1 sampai 3
    }

    return 0;
}
