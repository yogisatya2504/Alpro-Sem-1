/*
program menampilkan huruf A - Z
*/

#include <stdio.h>

int main(){
    char a = 'A';
    for (int i = 0; i < 26; i++){
        printf("%c\n",a);
        a+=1;
    }
}
