#include<stdio.h>

float energiKinetik(float m, float v);

void main(){
    float m, v;
    printf("===INPUT===\n");
    printf("Masukkan massa (kg) = ");
    scanf("%f", &m);
    printf("Masukkan kecepatan (m/s) = ");
    scanf("%f", &v);

    float ek = energiKinetik(m, v);
    printf("===OUTPUT===\n");
    printf("Energi kinetik benda tersebut adalah %.2f J",ek);
}
float energiKinetik(float m, float v){
    float e;
    e = m * v*v / 2;
    return e;
}