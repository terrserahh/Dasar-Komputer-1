/*Buatlah sebuah program dengan sequential search untuk
mencari data nama pengguna laptop yang terdiri dari nama pengguna
dan merk laptop yang dipakai!
Contoh : 
Nama Pengguna
===INPUT===
Jumlah data pengguna : 2
Data 1
Nama Pengguna : Justin
Merk Laptop	: Asus
Data 2 
Nama Pengguna : Garry
Merk Laptop : Acer
===OUTPUT===
Nama Pengguna Justin ada di urutan 1*/

#include <stdio.h>
#include<string.h>
struct data{
char nama[20], merk[20];
}pengguna[100];
void main(){
    int i, n, found = -1;
    char cari[25];
    printf("Jumlah data pengguna : ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++){
        fflush(stdin);
        printf("Data %d \n", i+1);
        printf("Nama Pengguna : "); gets(pengguna[i].nama);
        printf("Merk Laptop   : "); gets(pengguna[i].merk);
    }

    printf("\nInput nama pengguna yang ingin dicari: ");
    scanf("%s", cari);
   
    //sequential search
    for ( i = 0; i < n; i++){
        if (strcmp(pengguna[i].nama, cari) == 0){
            found = i;
            break;
        }
    }
    if (found != -1){
        printf("Nama Pengguna %s ada di urutan %d", cari, found+1);
    } else {
        printf("Nama Pengguna %s tidak ditemukan.", cari);
    }
}