#include<stdio.h>
struct biodata {
    char nama[20], ttl[20], jurusan[20], kelas[20], nis[20]; 
}b;
int main()
{
     printf("Nama Lengkap\t:");
    gets(b.nama);
    //input data pada struct

    printf("TTL\t\t:");
    gets(b.ttl);

    printf("Jurusan\t\t:");
    gets(b.jurusan);

    printf("Kelas\t\t:");
    gets(b.kelas);

    printf("NIS\t\t:");
    gets(b.nis);

    printf("==================\n\n");

    printf("Pendataan Siswa Baru \n\n");
    printf("Nama Lengkap \t: %s \n",b.nama);
    printf("TTL \t\t: %s \n",b.ttl);
    printf("Jurusan \t: %s \n",b.jurusan);
    printf("Kelas\t\t: %s \n",b.kelas);
    printf("NIS \t\t: %s \n",b.nis);
    return 0;
}