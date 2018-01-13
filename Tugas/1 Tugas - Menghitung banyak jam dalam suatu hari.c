/*
program menghitung banyak jam dalam suatu hari
*/

#include <stdio.h>

int main(){
    int hari;
    printf("Banyak hari = ");
    scanf("%i",&hari);

    printf("%i hari = %i jam\n",hari,hari * 24);

    return(0);
}
