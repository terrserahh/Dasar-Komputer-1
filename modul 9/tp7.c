/*Buatlah program untuk 
menginputkan Nama, NIM, dan Nilai, 
kemudian menampilkan  data yang 
diinputkan tadi! 
Gunakan array of struct dan algoritma rekursif!
Contoh : 
==Input== 
Jumlah Mahasiswa : 2
 
Data 1 
Nama : Teguh
NIM :  1102333013
Nilai : 80
  
Data 2
Nama :  Bahri
NIM :  1102233012
Nilai :  90
==Output== 
Data 1 
Nama : Teguh
NIM :  1102333013
Nilai : 80
  
Data 2
Nama :  Bahri
NIM :  1102233012
Nilai :  90*/
#include <stdio.h>
#include <string.h>
int n;

//struct untuk data mahasiswa
struct mhs{
    char nama[50];
    int nim,nilai;
}data[100];

//fungsi rekursif utk menampilkan output
void output(struct mhs data[], int n, int i){
    if (i >=n){
        return;
    }
    printf("\nData %d\n", i+1);
    printf("Nama  : %s\n", data[i].nama);
    printf("NIM   : %d\n", data[i].nim);
    printf("Nilai : %d\n",data[i].nilai);

    output(data,n,i+1);
}
int main(){
    int jmlh;
    printf("==INPUT==\n");
    printf("Jumlah Mahasiswa: ");
    scanf("%d", &jmlh);

    //deklarasi array dari struct mhs
    struct mhs data[jmlh];
    //input data mhs
    for (int i=0; i< jmlh; i++){
        fflush(stdin);
        printf("\nData %d", i+1);
        printf("\nNama  : "); 
        gets(data[i].nama);
        printf("NIM   : ");
        scanf("%d", &data[i].nim);
        printf("Nilai : ");
        scanf("%d", &data[i].nilai);
    }

printf("==OUTPUT==");
//pemanggilan fungsi rekursif utk output data
output(data, jmlh, 0);
return 0;
}