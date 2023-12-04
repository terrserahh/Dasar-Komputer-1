#include <stdio.h>

int main() {
    int menu;
    float jp, js, sk;

    //Menunjukkan menu
    printf("===MENU===\n");
    printf("1. Skala\n");
    printf("2. Jarak pada peta\n");
    printf("3. Jarak Sebenarnya\n\n");

    //pilih menu
    printf("Pilih Menu : ");
    scanf("%d", &menu);

    //MENU SKALA
    if (menu == 1)
    {
        printf("\n=== KALKULATOR SKALA ===\n");
        printf("Jarak pada Peta (cm)\t : ");
        scanf("%f", &jp);
        printf("Jarak sebenarnya (km)\t : ");
        scanf("%f", &js);

        sk = (js * 100000) / jp;
        printf("Skala (cm) \t\t = 1 : %.0f", sk);
    } 
    //MENU JARAK PETA
    else if (menu == 2)
    {
        printf("\n=== KALKULATOR JARAK PETA ===\n");
        printf("Skala (cm)\t\t = 1 : ");
        scanf("%f", &sk);
        printf("Jarak sebenarnya (km)\t = ");
        scanf("%f", &js);

        jp = (js * 100000) / sk;
        printf("Jarak Peta (cm)\t\t = %.2f cm", jp);
    }
    //MENU JARAK SEBENARNYA
    else if (menu == 3)
    {
        printf("\n=== KALKULATOR JARAK SEBENARNYA ===\n");
        printf("Skala (cm)\t\t = 1 : ");
        scanf("%f", &sk);
        printf("Jarak pada peta (cm)\t = ");
        scanf("%f", &jp);

        js = (jp * sk)/100000;
        printf("Jarak Sebenarnya (km)\t = %.2f km", js);
    }
    //jika salah input
    else {
    printf("Invalid Input!");}

    printf("\n\n");
}