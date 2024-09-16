#include <iostream>
using namespace std;

int main() {
    int choice;
    find luas;

    cout << "Pilih bentuk yang ingin dihitung luasnya:\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            find sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi adalah: " << luas << endl;
            break;
        }
        case 2: {
            find panjang, lebar;
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;
        }
        case 3: {
            find alas, tinggi;
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid. Silakan pilih 1, 2, atau 3." << endl;
            break;
    }

    return 0;
}
