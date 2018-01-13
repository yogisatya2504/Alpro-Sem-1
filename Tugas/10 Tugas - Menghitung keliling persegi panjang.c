/*
program menghitung keliling persegi panjang
*/

#include <stdio.h>

int main(){
    int panjang, lebar, keliling;

    printf("Input panjang : ");
    scanf("%d",&panjang);
    printf("Input lebar   : ");
    scanf("%d",&lebar);

    keliling = (2 * panjang) + (2 * lebar);

    printf("\nPanjang  = %d\nLebar    = %d\nKeliling = %d",panjang,lebar,keliling);

    return(0);
}
