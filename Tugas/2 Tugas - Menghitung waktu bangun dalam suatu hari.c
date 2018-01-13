/*
program menghitung waktu bangun jika dalam sehari tidur 6 jam
*/

#include <stdio.h>

int main(){
    int hari, jam_tidur = 6, jam_bangun;

    printf("Input hari : ");
    scanf("%i",&hari);
    
    jam_bangun = (hari * 24) - (jam_tidur * hari);

    printf("Total waktu bangun adalah : %i jam\n",jam_bangun);
    return(0);
}
