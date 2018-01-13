/*
program menghitung nilai IPK
*/

#include <stdio.h>

int main(){
    double nmk1,nmk2,nmk3,sks1,sks2,sks3,ipk;
    char ipk_='X';

    printf("Input Nilai MK1\t= ");
    scanf("%lf",&nmk1);
    printf("Input SKS MK1\t= ");
    scanf("%lf",&sks1);
    printf("Input Nilai MK2\t= ");
    scanf("%lf",&nmk2);
    printf("Input SKS MK2\t= ");
    scanf("%lf",&sks2);
    printf("Input Nilai MK3\t= ");
    scanf("%lf",&nmk3);
    printf("Input SKS MK3\t= ");
    scanf("%lf",&sks3);

    ipk = ((nmk1 * sks1) + (nmk2 * sks2) + (nmk3 * sks3)) / (sks1 + sks2 + sks3);

    printf("\nNilai IPK\t= %lf \n",ipk);

    if (ipk == 4){
        ipk_='A';
    }else if (ipk == 3){
        ipk_='B';
    }else if (ipk == 2){
        ipk_='C';
    }else if (ipk == 1){
        ipk_='D';
    }

    printf("Predikat IPK\t= %c \n", ipk_);
    return(0);
}
