/*Buatlah sebuah program algoritma rekrusif yang dapat menampilkan suatu deret pangkat!
Dibuat secara ascending Untuk NIM GANJIL!
Contoh : 
a.  Ascending
=== Input ===
Masukkan banyak suku : 5
=== Output ===
Hasil : 1 4 9 16 25
*/

/*#include <stdio.h>
int suku(int bil){
    if(bil == 1)
        return 1;
            else 
                return bil*bil;
}
void pangkat(int n){
    if (n > 1){
        pangkat(n-1);
    } 
    printf ("%d ", suku(n));
}
void main(){
    int bil; 
    printf("Masukkan banyak suku : ");
    scanf("%d", &bil);
    printf("Hasil : ");
    pangkat(bil);
}*/

/*
DESCENDING WKWK
#include <stdio.h>
void suku(int bil){
    if(bil == 0)
        return;
        printf("%d ",bil*bil);
        suku(bil-1);
}
void main(){
    int bil; 
    printf("Masukkan banyak suku : ");
    scanf("%d", &bil);
    printf("Hasil : ");
    suku(bil);
}*/
#include <stdio.h>
int pangkat(int n){
    if(n==1)
        return 1;
        else
        return n*n;
}
void deret(int n){
    if (n>1){
        deret(n-1);
    }
    printf("%d ", pangkat(n));
}
void bubble(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;}
}
void main(){
    int suku, arr[suku];
    printf("Masukkan banyak suku : ");
    scanf("%d", &suku);
    printf("Hasil : ");

    for (int i = 0; i < suku; i++){
        arr[i]= pangkat(i+1);
    }
    bubble(arr, suku);

    for (int i = 0; i < suku; i++){
        printf("%d ", arr[i]);
    }
}