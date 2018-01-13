/*
program menampilkan bilangan faktorial
*/

#include <stdio.h>

int main(){
    int a,b=0;

    scanf("%d",&a);

    for ( ; a > 0 ; a--){
        b += a;
    }

    printf("%d\n",b);
}
