#include <stdio.h>

void bilangan(int a){
    if(a>150){
        printf("===OUTPUT===\n");
        printf("Tinggi %d cm dapat memasuki wahana", a);
    }else{ 
        printf("===OUTPUT===\n");
        printf ("Tinggi %d cm TIDAK DAPAT memasuki wahana", a);
    }
}
void main(){
    int t;
    printf("===INPUT===\n");
    printf("Masukkan tinggi anda (cm) : ");
    scanf("%d", &t);
    bilangan(t);
    return ;
}