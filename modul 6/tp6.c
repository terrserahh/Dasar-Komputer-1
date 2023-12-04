/*Buatlah sebuah program yang dapat menukar huruf pertama dan huruf terakhir dari sebuah kata!
Contoh : 
===INPUT===
Masukkan kata : daskom
===OUTPUT===
Setelah penukaran : maskod*/

#include<stdio.h>
#include<string.h>
char kata[50];
void main(){
    printf("Masukkan kata : "); 
    gets(kata);
    char temp;
    temp = kata[strlen(kata)-1]; //menyimpan huruf terakhir ke variable temp
    kata[strlen(kata)-1] = kata[0]; //memindahkan huruf pertama ke posis
    kata[0] = temp; //memindahkan huruf terakhir ke posisi huruf pertama
    printf("\nSetelah penukaran : %s",kata);
} 

/*bisa jg
#include<stdio.h>
#include<string.h>
char kata[50];
int panjang;
void main(){
    printf("Masukkan kata : "); gets(kata);
    panjang = strlen(kata)-1;
    printf("\nSetelah penukaran : ");
    for(panjang; panjang>=0; panjang--)
    printf("%c", kata[panjang]);
} */