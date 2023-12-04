/*Buatlah program menggunakan BINARY SEARCH untuk menemukan angka  yang telah diinputkan user secara acak, urutkan data terlebih dahulu! (Gunakan bubble sort)

=== INPUT === 
Banyak angka : 5 
Angka 1 : 8 
Angka 2 : 2 
Angka 3 : 6 
Angka 4 : 3 
Angka 5 : 1 
Angka yang dicari : 3 
=== OUTPUT === 
Angka yang sudah terurut : 1 2 3 6 8 
Angka ditemukan pada urutan : 3*/
#include <stdio.h>
int a[100];
int i, j, n, cari, idx, low, high, mid, temp;
int main(){
    printf("Banyak angka : ");
    scanf("%d", &n);
        for (i=0;i<n;i++){
          printf("Angka %d : ", i+1);
         scanf("%d", &a[i]);
        }
    printf("\n Angka yang dicari : ");
    scanf("%d", &cari);
        //bubble sort
        for (i=n-1; i>=1;i--){
            for(j=1;j<=i;j++){
                if (a[j-1]>a[j]){
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                }
            }
        }
    printf("\n Angka yang sudah terurut : ");
        for(i=0;i<=n-1;i++){
            printf("%d ", a[i]);
        }
    //binary search
    low=0;
    high=n-1;
    idx=-1;
    while ((low<=high)&&(idx==-1)){
        mid=(low + high)/2;
        if (a[mid] == cari){
            idx = mid;
            }else if (a[mid] < cari){
                low=mid+1;
            }else high=mid-1;
        }
    if(idx!=-1){
        printf("\nAngka ditemukan pada urutan : %d", idx+1);
    }else{
        printf("Data tidak ditemukan");
    }
}