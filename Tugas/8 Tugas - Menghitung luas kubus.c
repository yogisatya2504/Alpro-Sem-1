/*
program menghitung volume kubus jika diketahui luas alasnya
*/

#include <stdio.h>
#include <math.h>

int main(){
    int luas;
    double sisi,volume;

    printf("Input luas persegi\t= ");
    scanf("%d",&luas);

    sisi = sqrt(luas);
    volume = sisi * sisi * sisi;

    printf("\nVolume kubus\t= %lf \n",volume);

    return(0);
}
