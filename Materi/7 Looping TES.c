/*
program menampilkan hasil penjumlahan
Input : 3
output :
0 + 1 = 1
1 + 2 = 3
3 + 3 = 6
*/

#include  <stdio.h>

int main(){
    int a, jumlah=0;
    printf("Input : ");
    scanf("%d",&a);

    for (int b = 1; b <= a; b++){
        printf("%d + ",jumlah);
        jumlah = jumlah + b;
        printf("%d = %d\n",b,jumlah);
    }
}
