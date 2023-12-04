/*Buatlah sebuah program untuk mendata Mahasiswa Telkom University! Gunakan tipe data bentukan!
===INPUT===
Jumlah Mahasiswa : 2
Data 1
Nama :
Nim :
Jurusan :
Data 2
Nama :
Nim :
Jurusan :
===OUTPUT===
Data Mahasiswa Telkom University : 
1. nama, nim, jurusan
2. nama, nim, jurusan*/

#include<stdio.h>
struct mahasiswa{
    char nama[50], jurusan[20];
    int nim;
    };
    int main(){
        struct mahasiswa mhs[100];
        int i, jml_mahasiswa;
        printf("Masukkan Jumlah Mahasiswa: ");
        scanf("%d", &jml_mahasiswa);
        for(i=0; i<jml_mahasiswa; i++){
            printf("\nData %d\n", i+1);
            printf("Nama : "); fflush(stdin); gets(mhs[i].nama);
            printf("NIM : "); scanf("%d", &mhs[i].nim);
            printf("Jurusan : "); fflush(stdin); gets(mhs[i].jurusan);
            }
     printf("\nData Mahasiswa Telkom University:\n");
     for (i = 0; i < jml_mahasiswa; ++i) {
        printf("%d. %s, %d, %s\n", i+1, mhs[i].nama, mhs[i].nim, mhs[i].jurusan);
        }  
return 0;
}