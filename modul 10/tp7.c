/*Buatlah sebuah program yang menginputkan 
data asisten praktikum Lab Dasar Komputer, 
seperti Nama (string), NIM (string),  Kelas (string),
 dan angkatan (int), lalu menampilkan hasil yang telah
  diinputkan dengan file biner!
Contoh : 
===INPUT===
Masukkan banyak data : 2
Data 1
Nama		: Nur Muhammad Faza
NIM		: 1104223008
Kelas		: TF4604
Angkatan	: 2022 
Data 2
Nama		: Dennytan Raharjo
NIM		: 1104223013
Kelas		: TF4601
Angkatan	: 2022
===OUTPUT===
Nama		: Nur Muhammad Faza
NIM		: 1104223008
Kelas		: TF4604
Angkatan	: 2022 

Nama		: Dennytan Raharjo
NIM		: 1104223013
Kelas		: TF4601
Angkatan	: 2022*/

#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    FILE *f_struktur;

    struct asisten{
        char nama[50], nim[20], kelas[20];
        int angkatan;
    }data;

    //input data
    printf("Masukkan banyaknya data : ");
    scanf("%d", &n); getchar();

    f_struktur=fopen("Data Asisten.dat", "wb");
    if (f_struktur !=NULL){
        for (i=0; i<n;i++){
            printf("Data %d\n", i+1);
            printf("Nama\t  : ");gets(data.nama);
            printf("NIM\t  : ");gets(data.nim);
            printf("Kelas\t  : ");gets(data.kelas);
            printf("Angkatan  : "); scanf("%d", &data.angkatan);getchar();
            fwrite(&data, sizeof(struct asisten), 1, f_struktur);
        }

        fclose(f_struktur);
    }
    // Membaca File Struktur
    printf("===OUTPUT===\n");
    f_struktur = fopen ("Data Asisten.dat","rb");
    if(f_struktur != NULL){
        i = 0;
            while(fread(&data, sizeof(struct asisten),1,f_struktur)==1){
            printf("\nNama\t : %s\n", data.nama);
            printf("NIM\t : %s\n", data.nim);
            printf("Kelas\t : %s\n", data.kelas);
            printf("Angkatan : %d\n", data.angkatan);
            i++;
            }
    fclose(f_struktur);
    } else {
        printf("\nFile tidak ditemukan!");
        return -1;
    }
    return 0;
}