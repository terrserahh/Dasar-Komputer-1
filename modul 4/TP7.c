#include <stdio.h>

int main() {
    int tb;

    printf("Masukkan banyak baris: ");
    scanf("%d", &tb);

    for (int i = 1; i <= tb; i++) {
        for (int j = i; j <= tb; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}