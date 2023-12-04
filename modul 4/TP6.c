#include <stdio.h>

struct SiswaBasket {
    char nama[50];
    char kelas[10];
    char jurusan[50];
    int nis;
};

int main() {
    int jumlahSiswa;

    printf("Masukkan banyak siswa yang ingin diinput: ");
    scanf("%d", &jumlahSiswa);

    struct SiswaBasket siswa[jumlahSiswa];

    for (int i = 0; i < jumlahSiswa; i++) {
        printf("Data %d\n", i + 1);
        printf("Nama\t\t: ");
        scanf(" %s", siswa[i].nama);
        printf("Kelas\t\t: ");
        scanf(" %s", siswa[i].kelas);
        printf("Jurusan\t\t: ");
        scanf(" %s", siswa[i].jurusan);
        printf("NIS\t\t: ");
        scanf("%d", &siswa[i].nis);
    }

    printf("\n===OUTPUT===\n");
    for (int i = 0; i < jumlahSiswa; i++) {
        printf("Data %d\n", i + 1);
        printf("Nama\t\t: %s\n", siswa[i].nama);
        printf("Kelas\t\t: %s\n", siswa[i].kelas);
        printf("Jurusan\t\t: %s\n", siswa[i].jurusan);
        printf("NIS\t\t: %d\n\n", siswa[i].nis);
    }

    return 0;
}