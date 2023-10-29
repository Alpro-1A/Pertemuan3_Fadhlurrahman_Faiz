#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "masukan score: ";
    cin >> score; // input score

    if (score >= 90) {
    cout << "Selamat! anda mendapatkan nilai A." << endl; // score 90 sampai 100 mendapat A
    } else if (score >= 80 && score < 90) {
    cout << "Selamat! anda mendapatkan nilai B." << endl; // score 80 sampai 89 mendapat B
    } else if (score >= 70 && score < 80) {
    cout << "Selamat! anda mendapatkan nilai C." << endl; // score 70 sampai 79 mendapat C
    } else if (score >= 60 && score < 70) {
    cout << "Selamat! anda mendapatkan nilai D." << endl; // score 60 sampai 69 mendapat D
    } else if (score < 60) {
    cout << "Selamat! anda mendapatkan nilai E." << endl; // score dibawah 60 mendapat E
    }

    return 0;
}
