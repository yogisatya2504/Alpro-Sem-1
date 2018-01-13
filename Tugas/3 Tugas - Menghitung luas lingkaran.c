/*
program menghitung luas lingkaran
*/

#include <stdio.h>

int main(){
    int panjang, lebar, luas_persegi;
    float r, luas_lingkaran;

    printf("Input panjang : ");
    scanf("%i",&panjang);
    printf("Input lebar   : ");
    scanf("%i",&lebar);

    luas_persegi = panjang * lebar;
    r = luas_persegi / 2;
    luas_lingkaran = 22 * r * r / 7;

    printf("Luas lingkaran adalah : %.2f\n",luas_lingkaran)
    return(0);
}
