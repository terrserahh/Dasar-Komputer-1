/*Dari program telah dibuat sebelumnya, tampilkanlah kembali data 
yang sudah diiput kemudian buatlah program baru untuk menghapus
salah satu data praktikan yang diinginkan berdasarkan :
a. Nama (dikerjakan oleh NIM Genap)
b. Kelas (dikerjakan oleh NIM Ganjil)

Contoh untuk nama :
===INPUT===
Masukkan nama asisten yang ingin dihapus : Dennytan Raharjo
===OUTPUT===
Nama		: Nur Muhammad Faza
NIM		: 1104223008
Kelas		: TF4604
Angkatan	: 2022 */

#include <stdio.h>
#include <string.h>
int main(){
    int n, i;
    char cari[50];
    FILE *f_struktur;
    FILE *f_struktur2;

    struct asisten{
        char nama[50], nim[20], kelas[20];
        int angkatan;
    }data;
    
    //menampilkan data tersimpan
    printf("===Data yang disimpan===\n");
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

    //penghapusan nama
    f_struktur = fopen("Data Asisten.dat", "rb");
    f_struktur2 = fopen("Data Asisten2.dat", "wb");
    printf("Masukkan kelas asisten yang ingin dihapus : ");
    gets(cari);
    if (f_struktur != NULL && f_struktur2!=NULL){
        while (fread(&data, sizeof(data),1, f_struktur)==1){
                if(strcmp(data.kelas, cari)!=0){
                    fwrite(&data, sizeof(data),1,f_struktur2);
                }
            }
        fclose(f_struktur);
        fclose(f_struktur2);
        remove("Data Asisten.dat");
        rename("Data Asisten2.dat", "Data Asisten.dat");

        //menampilkan data yang baru
        printf("===Data Baru===\n");
        f_struktur = fopen ("Data Asisten.dat","rb");
        if(f_struktur != NULL){
            i = 0;
                while(fread(&data, sizeof(struct asisten),1,f_struktur)==1){
                    printf("\nNama\t : %s\n", data.nama);
                    printf("NIM\t : %s\n", data.nim);
                    printf("Kelas\t : %s\n", data.kelas);
                    printf("Angkatan : %d\n", data.angkatan);
                    i++;
                } fclose(f_struktur);
        } else {
            printf("\nFile tidak ditemukan!");
            return -1;
        }
    }
}