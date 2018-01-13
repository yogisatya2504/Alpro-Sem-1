/*
program menampilkan bilangan genap ganjil
*/

#include <stdio.h>

int main(){
    int a;
    printf("Input : ");
    scanf("%d",&a);

    for (int b = 1; b <= a; b++){
        printf("%d ",b);
        if (b % 2 == 0){
            printf("Genap\n");
        }else{
            printf("Ganjil\n");
        }
    }
}
