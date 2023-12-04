/*Buatlah program menggunakan struct yang dapat menginputkan nama barang, kode barang, dan jumlahnya, kemudian mengurutkannya berdasarkan :
Nama Barang (Ascending) (NIM GANJIL) 
Nama Barang (Descending)(NIM GENAP) 
Contoh : 
Ascending
===INPUT===
Banyak barang : 3

Data 1
Nama Barang : Komputer
Kode Barang : A01
Jumlah : 4
Data 2
Nama Barang : Keyboard
Kode Barang : A03
Jumlah : 3
Data 3
Nama Barang : Mouse
Kode Barang : A02
Jumlah : 2

===OUTPUT===
Data 1
Nama Barang : Keyboard
Kode Barang : A03
Jumlah : 3
Data 2
Nama Barang : Komputer
Kode Barang : A01
Jumlah : 4
Data 3
Nama Barang : Mouse
Kode Barang : A02
Jumlah : 2*/
#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char nama[5][20];
    char temp[30];
    char kode[5][5];
    int jml[15];
    printf("Banyak barang : "); scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nData %d\n", i+1);
        printf("Nama Barang : "); fflush(stdin); gets(temp); strcpy(nama[i], temp);
        printf("Kode Barang : "); gets(temp); strcpy(kode[i], temp);
        printf("Jumlah      : "); scanf("%d", &jml[i]);
    }
    // Sorting
    for (i = n-1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (strcmp(nama[j-1], nama[j]) > 0)
            {
                strcpy(temp, nama[j-1]);
                strcpy(nama[j-1], nama[j]);
                strcpy(nama[j], temp);
            }
        }
    }
    printf("\nOutput\n");
    for(i=0; i<n; i++) {
        printf("Data %d\n", i+1);
        printf("Nama Barang : %s\n", nama[i]);
        printf("Kode Barang : %s\n", kode[i]);
        printf("Jumlah      : %d\n", jml[i]);
    }
}