#include <iostream>
using namespace std;

// variabel global
int angka;
int pilihan;

// cek bilangan prima
bool cekPrima() {
    if (angka < 2) return false;
    int i = 2;
    while (i * i <= angka) {
        i++;
    }
    return true;
}

int main() {
    return 0;
}