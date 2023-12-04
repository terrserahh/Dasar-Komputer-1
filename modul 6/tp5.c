/*Apakah output dari program tersebut? Jelaskan alasannya!*/


#include <stdio.h>
 int main(){ 
 	int array[4] /*indeks array hanya ada 4 (0,1,2,3)*/ = {90,5,20,64,62};/*elemen array malah ada 5*/ 
        printf("%d", array[5]); /*lah ini yg dipanggil malah indeks ke 6. knp 6? krn jika total indeks ada 6, maka (0,1,2,3,4,5) */
        return 0; 
}
