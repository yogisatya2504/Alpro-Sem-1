/*
program menampilkan "Saya mahasiswa PTI" sebanyak yang diinput user
*/

#include <stdio.h>

int main(){
    int jumlah;

    printf("Masukkan jumlah : ");
    scanf("%d",&jumlah);

    for ( ; jumlah > 0; jumlah--){
        printf("Saya mahasiswa PTI\n");
    }
}
