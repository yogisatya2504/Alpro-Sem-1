/*
Program perkalian matriks
*/

#include <stdio.h>

int main(){
    // akan ada dua matriks dengan m1[baris[0]][kolom[0]] dan m2[baris[1]][kolom[1]]
    int baris[2], kolom[2];

    // input baris dan kolom masing" matriks (* kolom m1 dan baris m2 harus sama agar bisa dikali)
    printf("Input banyak baris matriks 1 : ");
    scanf("%d",&baris[0]);
    printf("Input banyak kolom matriks 1 : ");
    scanf("%d",&kolom[0]);
    baris[1] = kolom[0];
    printf("Input banyak baris matriks 2 : %d\n",baris[1]);
    printf("Input banyak kolom matriks 2 : ");
    scanf("%d",&kolom[1]);

    // inisialisasi banyak baris dan kolom m1, m2, dan matriks hasiil kali
    int matriks1[baris[0]][kolom[0]], matriks2[baris[1]][kolom[1]], hasilkalimatriks[baris[0]][kolom[1]];

    // input tiap data dari matriks
    for (int i = 0; i < 2; i++){
        printf("\nMasukkan data matriks %d\n",i+1);
        for (int j = 0; j < baris[i]; j++){
            for (int k = 0; k < kolom[i]; k++){
                printf("Masukkan data matriks baris %d kolom %d : ",j+1,k+1);
                if (i == 0){
                    scanf("%d",&matriks1[j][k]);
                }
                else{
                    scanf("%d",&matriks2[j][k]);
                }
            }
        }
        printf("-------------------------------------------");
    }

    // tampilkan data tiap matriks
    for (int i = 0; i < 2; i++){
        printf("\nData matriks %d :\n",i+1);
        for (int j = 0; j < baris[i]; j++){
            for (int k = 0; k < kolom[i]; k++){
                if (i == 0)
                    printf("%d ",matriks1[j][k]);
                else
                    printf("%d ",matriks2[j][k]);
            }
            printf("\n");
        }
    }

    printf("-------------------------------------------\n");
    printf("Hasil kali matriks 1 dan matriks 2 adalah : \n");

    for (int i = 0; i < baris[0]; i++){
        for (int j = 0; j < kolom[1]; j++){
            // inisialisasi bahwa tiap data matriks hasil kali diisi dengan 0 terlebih dahulu
            hasilkalimatriks[i][j] = 0;
            for (int k = 0; k <= baris[0]; k++){
                // proses perkalian matriks per kolom
                hasilkalimatriks[i][j] += matriks1[i][k] * matriks2[k][j];
            }
            // tampilkan hasil matriks pada baris dan kolom saat ini
            printf("%d\t",hasilkalimatriks[i][j]);
        }
        printf("\n");
    }

    return(0);
}
