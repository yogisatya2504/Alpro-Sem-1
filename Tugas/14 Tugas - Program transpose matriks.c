/*
Program transpose matriks
*/

#include <stdio.h>

int main(){
    int baris, kolom;

    // input baris dan kolom matriks
    printf("Input banyak baris matriks 1 : ");
    scanf("%d",&baris);
    printf("Input banyak kolom matriks 1 : ");
    scanf("%d",&kolom);

    // inisialisasi banyak baris dan kolom matriks
    int matriks1[baris][kolom];
    // transpose itu baris jadi kolom atau kolom jadi baris
    int tmatriks1[kolom][baris];

    // input tiap data dari matriks
    printf("\nMasukkan data matriks :\n");
    for (int j = 0; j < baris; j++){
        for (int k = 0; k < kolom; k++){
            printf("Masukkan data matriks baris %d kolom %d : ",j+1,k+1);
            scanf("%d",&matriks1[j][k]);
            //memasukkan tranpose matriks 1 (baris jadi kolom)
            tmatriks1[k][j] = matriks1[j][k];
        }
    }
    printf("-------------------------------------------");

    // tampilkan data tiap matriks
    printf("\nData matriks\n");
    for (int j = 0; j < baris; j++){
        for (int k = 0; k < kolom; k++){
            printf("%d ",matriks1[j][k]);
        }
        printf("\n");
    }

    printf("-------------------------------------------\n");
    printf("Hasil transpose matriks adalah : \n");

    //tampilkan data hasil transpose
    printf("\nData tranpose matriks : \n");
    for (int j = 0; j < kolom; j++){
        for (int k = 0; k < baris; k++){
            printf("%d ",tmatriks1[j][k]);
        }
        printf("\n");
    }

    return(0);
}
