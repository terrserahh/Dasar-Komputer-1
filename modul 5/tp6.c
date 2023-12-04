#include <stdio.h>

float energiPotensial(float m, float g, float h);

void main(){
    float m,g,h;
    printf("Masukkan massa benda (kg) = ");
    scanf("%f",&m);
    printf("Masukkan percepatan gravitasi (m/s^2) = "); 
    scanf("%f",&g);
    printf("Masukkan ketinggian benda = ");
    scanf("%f", &h);

    float ep = energiPotensial(m, g, h); 
    printf("Hasil Penjumlahan = %.2f",ep);
}
float energiPotensial(float m, float g, float h){
    float e;
    e=m*g*h;
    return e;
}