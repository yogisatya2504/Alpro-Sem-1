/*
Program pencarian
*/

#include <stdio.h>
#include <string.h> //untuk strcmp

int main(){
    int n,caribenar = 0,i;
    printf("Masukkan n : ");
    scanf("%d",&n);

    char arr[n][50], cari[50];

    for (i = 0; i < n; i++){
        printf("Masukkan arr[%d] : ",i);
        scanf("%s",&arr[i]);
    }

    printf("Cari : ");
    scanf("%s",&cari);

    i = 0;
    while(caribenar == 0){
        // strcmp (string compare) fungsinya membandingkan dua string, jika hasilnya < 0 maka lebih kecil valuenya, jika > 0 maka lebih besar
        // menggunakan strcmp karena jika == maka yang dicompare adalah alamat pointernya
        if (strcmp(arr[i],cari) == 0){
            caribenar = 1;
            printf("%s berada pada index : arr[%d]\n",cari,i);
        }

        if (i == n){
            caribenar = 1;
            printf("Yang dicari tidak ditemukan\n");
        }
        i++;
    }

    return(0);
}
