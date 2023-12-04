#include <stdio.h>

int main() {
    float phi = 3.14;
    float r, s, LP;

    printf("Masukkan Jari-jari: ");
    scanf("%f",&r);
    printf("Masukkan Panjang Selimut: ");
    scanf("%f",&s);

    LP = phi * r * (r + s);

    printf("Luas Permukaan Kerucut: %.2f\n", LP);

    return 0;
}