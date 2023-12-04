/*Buatlah sebuah program rekursif
 yang dapat membuat kelipatan dari 
 suatu bilangan!
Contoh : 

===INPUT===
Bilangan	: 2
Batas		: 19
===OUTPUT===
Kelipatan	: 2 4 8 16*/
#include <stdio.h>
void kelipatan(int bil, int batas, int hasil){
    if (hasil>batas){
        return;
    }
    printf("%d ", hasil);
    kelipatan(bil, batas, hasil * bil);
}
void main(){
    int bil, batas;
    printf("Bilangan : ");
    scanf("%d", &bil);
    printf("Batas\t : ");
    scanf("%d", &batas);

    printf("Kelipatan : ");
    kelipatan(bil, batas, bil);
    return;
}