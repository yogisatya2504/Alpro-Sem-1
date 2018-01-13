/*
program menampilkan total jumlah dari 10 + 11 + 12 + .. + 99
*/

#include <stdio.h>

int main(){
    int total = 0;

    for (int i = 10; i <= 100; i++){
        total += i;
    }
    printf("%d\n",total);
}
