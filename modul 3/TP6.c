#include <stdio.h> 
void main()
{
    char daskom;
    
    printf("Huruf yang akan diperiksa : ");
    scanf("%c", &daskom);
    
    if (daskom == 'D') {
        printf("Huruf D terdapat pada kata DASKOM");
    }
    else if (daskom == 'A') {
        printf("Huruf A terdapat pada kata DASKOM");
    }
    else if (daskom == 'S'){
        printf("Huruf S terdapat pada kata DASKOM");
    }
    else if (daskom == 'K'){
        printf("Huruf K terdapat pada kata DASKOM");
    }
    else if (daskom == 'O'){
        printf("Huruf O terdapat pada kata DASKOM");
    }
    else if (daskom == 'M'){
        printf("Huruf M terdapat pada kata DASKOM");
    }
    else {
        printf("Maaf, huruf tidak ada pada kata DASKOM", &daskom);
    }

}