/*
program menghitung luas segitiga
*/

#include <stdio.h>

int main(){
    int alas, tinggi;
    double luas;

    printf("Input alas\t= ");
    scanf("%d",&alas);
    printf("Input tinggi\t= ");
    scanf("%d",&tinggi);

    luas = alas * tinggi / 2;

    printf("\nLuas\t= %lf \n",luas);

    return(0);
}
