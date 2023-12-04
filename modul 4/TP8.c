#include <stdio.h>

int main() {
    int a, b;

    // Membaca dua bilangan dari pengguna
    printf("Masukkan Angka 1: ");
    scanf("%d", &a);
    printf("Masukkan Angka 2: ");
    scanf("%d", &b);

    // Menggunakan algoritma Euclidean untuk menghitung FPB
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    // Hasil FPB adalah angka1 (atau angka2, karena mereka sekarang sama)
    int fpb = a;

    printf("FPB dari %d dan %d adalah %d\n", a, b, fpb);

    return 0;
}
