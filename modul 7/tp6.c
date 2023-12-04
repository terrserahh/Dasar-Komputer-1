/*Pada suatu hari terdapat 5 anak yang sedang bermain kelereng. 
Anak-anak tersebut bernama Teguh, Faza, Justin, Garry dan Ferdi.
 Secara berturut-turut mereka mempunya kelereng sebanyak 8, 7, 9,10, dan 5. 
 Buatlah sebuah program untuk mengurutkan jumlah kelereng yang mereka miliki 
 dengan menggunakan array dan prosedur secara ascending (Gunakan metode selain Bubble Sort)!
Contoh : 
===INPUT===
Kelereng Anak ke 1 : 8
Kelereng Anak ke 2 : 7
Kelereng Anak ke 3 : 9
Kelereng Anak ke 4 : 10
Kelereng Anak ke 5 : 5
===OUTPUT===
Hasil pengurutan : 5 7 8 9 10*/


#include <stdio.h>
int main(){
    int anak[5], i, j, min, temp;

    for ( i = 0; i < 5; i++)
    {
        printf("Kelereng anak ke %d : ", i+1);scanf("%i", &anak[i]);
    } //DIURUTKAN DENGAN METODE SLECTION SORT
    for (i=0; i<=5-2;i++) {
        min=i;
        for ( j = i; j <= 5-1; j++)
        if (anak[j]<anak[min])
        min = j;
        temp = anak[min];
        anak[min]=anak[i];
        anak[i]=temp;        
    }
    printf("Hasil pengurutan : ");
    for (i=0; i<=5-1; i++){
        printf("%d", anak[i]); printf(" ");
    }
}