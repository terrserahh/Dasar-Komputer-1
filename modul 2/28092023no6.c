#include <stdio.h>

int main() 
{
    int a, b, c, d;
    int hasil;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);

    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    printf("Masukkan nilai c: ");
    scanf("%d", &c);

    printf("Masukkan nilai d: ");
    scanf("%d", &d);

    hasil = (a + b) * (c - d);

    printf("Hasil dari (a + b) * (c - d) : %d\n", hasil);
    return 0;
}