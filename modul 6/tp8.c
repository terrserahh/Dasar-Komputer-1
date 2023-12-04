/*Buatlah sebuah program C yang dapat mencari determinan matriks 3x3. Lalu selesaikan operasi hitung di bawah ini!
a. determinan + (baris 1 kolom 1 matriks)
Contoh : 
==INPUT==
Jumlah Baris = 3
Jumlah Kolom = 3
Isi baris 1, kolom 1 = -4
Isi baris 1, kolom 2 = 0
Isi baris 1, kolom 3 = 3
Isi baris 2, kolom 1 = 1
Isi baris 2, kolom 2 = 7
Isi baris 2, kolom 3 = 4
Isi baris 3, kolom 1 = 2
Isi baris 3, kolom 2 = 5
Isi baris 3, kolom 3 = -1
===OUTPUT===
determinan matriks = 81*/

#include <stdio.h>
int main()
{
    int x, y; // Jumlah baris dan kolom matriks
    printf("Jumlah Baris = ");
    scanf("%d", &x);
    printf("Jumlah Kolom = ");
    scanf("%d", &y);

    int matrix[x][y];
    printf("Masukkan elemen matriks:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Isi baris %d, kolom %d = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Menghitung determinan matriks 3x3
    int det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                     matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                     matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    printf("Determinan matriks = %d\n", det);

    int operasi_ganjil = det + matrix[0][0];
    printf("Hasil dari determinan matriks ditambah baris 2 kolom 2 pada matriks adalah %d\n", operasi_ganjil);

    return 0;
}