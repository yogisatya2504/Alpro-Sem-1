/*
program menampilkan segitiga :
1 
2 2
3 3 3
4 4 4 4
dst ..
*/

#include <stdio.h>

int main(){
    for (int b=1; b<=5; b++){
        for (int c=1; c<=b; c++){
            printf("%d ",b);
        }
        printf("\n");
    }
}
