/*
Buatlah sebuah program C yang dapat mengurutkan n buah string secara DESCENDING!
Contoh : 
=== INPUT ==== 
Jumlah string : 3 
String 1 : Ferdi
String 2 : Teguh
String 3 : Justin
=== OUTPUT === 
Hasil pengurutan : Teguh Justin Ferdi*/

#include <stdio.h>
#include <string.h>
int main() {
    char nama[20][20];
    char temp[20];
    int n, i, j;
    printf("Masukkan jumlah string: "); scanf("%d", &n); getchar();
    for(i=0; i<n; i++) 
    {
        printf("String %d: ", i+1);
        gets(nama[i]);
    }
    for (i = n-1; i >= 1; i--){
        for (j = 1; j <= i; j++){
            if (strcmp(nama[j-1],nama[j])<0) /* descending (<), ascending (>)*/
            {
                strcpy(temp, nama[j-1]);
                strcpy(nama[j-1], nama[j]);
                strcpy(nama[j], temp);
            }
        }
    }
    printf("\nHasil pengurutan: \n");
    for (i = 0; i < n; i++)
    printf("%s  ", nama[i]);
    return 0;
}