#include <iostream>
using namespace std;

// variabel global
int angka;
int pilihan;

// (fungsi lain tetap sama)

// function tampil menu
void tampilMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;
}

int main() {
    return 0;
}