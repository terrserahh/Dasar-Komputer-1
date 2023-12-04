#include<stdio.h>
#include<string.h>

struct data 
    {
    char nama[30];
    char kelas[15];
    char pelajaran[20];
    int nilai;
    };
int main () {
struct data data;

printf("Nama : ");
scanf("%s", data.nama);
printf("Kelas : ");
scanf("%s", data.kelas);
printf("Pelajaran : ");
scanf("%s", data.pelajaran);
printf("Nilai : ");
scanf("%d", &data.nilai);

char indeks[5];
char k[50];

if (data.nilai>80){
indeks = 'A';
strcpy(k, "Lulus");}
else if (data.nilai>70){
indeks = 'AB';
strcpy(k, "Lulus");}
else if(data.nilai>65){
indeks = 'B';
strcpy(k, "Lulus");}
else if(data.nilai>60){
indeks == 'C';
strcpy(k, "Lulus");}
else if(data.nilai>50){
indeks == 'D';
strcpy(k, "Tidak Lulus");}

printf ("Nama : %s\n",data.nama);
printf ("Kelas : %s\n",data.kelas);
printf ("Pelajaran : %s\n",data.pelajaran);
printf ("Nilai : %s\n",data.nilai);
printf ("Indeks Nilai : %s\n",indeks);
printf ("Keterangan : %s\n",k);
return 0;
}