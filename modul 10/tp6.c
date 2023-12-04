/*Buatlah sebuah program untuk menginputkan sebuah kalimat kemudian meng outputkannya kembali menggunakan file teks!
Contoh : 
===INPUT===
Masukkan Teks : Bahasa pemrograman C adalah bahasa yang dibuat oleh Dennis Ritchie pada tahun 1972

===OUTPUT===
Bahasa pemrograman C adalah bahasa yang dibuat oleh Dennis Ritchie pada tahun 1972*/
#include <stdio.h>
int main(){
    char string[255];
    
    printf("===INPUT===\n");
    printf("Masukan Teks : ");
    FILE *f_teks;
    f_teks = fopen("tp6.txt", "w");
    gets(string);
    fprintf(f_teks, "%s\n", string);
    fclose(f_teks);

    //lakukan pemanggilan dari file

    printf("===OUTPUT===\n");
    f_teks = fopen("tp6.txt", "r");
    while(fgets(string, sizeof(string), f_teks)!=NULL)
    printf("%s", string);
    fclose(f_teks);
    return 0;
}
