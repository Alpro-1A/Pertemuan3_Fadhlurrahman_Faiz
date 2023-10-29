#include <iostream>
using namespace std;

int main() {
    int angka1, angka2, angka3;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    // Mencari angka terbesar di antara ketiganya
    int angka_terbesar = angka1;
    if (angka2 > angka_terbesar) {
        angka_terbesar = angka2;
    }
    if (angka3 > angka_terbesar) {
        angka_terbesar = angka3;
    }

    // Mencetak angka terbesar
    cout << "Angka terbesar di antara " << angka1 << ", " << angka2 << ", dan " << angka3 << " adalah " << angka_terbesar << "." << endl;

    return 0;
}
