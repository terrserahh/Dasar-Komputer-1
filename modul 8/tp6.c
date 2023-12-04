/*Buatlah sebuah program yang dapat mencari karakter di dalam string menggunakan sequential search!
Contoh : 
===INPUT===
Masukkan string 	: aku suka makan buah
Masukkan karakter	: a
===OUTPUT===
Karakter a ada di urutan : 1 8 11 13 18*/
#include <stdio.h>
void main () {
char karakter[50], cari;
    printf ("Masukkan string\t\t: ");
    gets (karakter);fflush(stdin);
    printf ("Masukkan karakter\t: ");
    scanf ("%c", &cari);

    printf ("\nKarakter %c ada di urutan : ", cari);
    //Sequential Search
    for (int i = 0; karakter[i] != 0; i++) {
        if (karakter[i] == cari) {
            printf("%d ", i + 1);
        }
    }
}