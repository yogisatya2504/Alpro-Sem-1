/*
program setoran bulanan selama dua bulan
*/

#include <stdio.h>

int main(){
    int saldo;
    float bunga, totalsaldo = 0;

    for (int i = 1; i <= 2; i++){
        printf("Setoran bulan %d : ",i);
        scanf("%d",&saldo);

        totalsaldo += saldo;

        printf("Saldo = %.2f, ",totalsaldo);
        if (totalsaldo < 500000){
            bunga = totalsaldo * 1 / 100;
            totalsaldo = totalsaldo + bunga;
            printf("anda mendapat bunga 1%% = %.2f, total saldo = %.2f\n",bunga,totalsaldo);
            printf("----------------------------------------------------------------------\n");
        }else{
            bunga = totalsaldo * 2 / 100;
            totalsaldo = totalsaldo + bunga;
            printf("anda mendapat bunga 2%% = %.2f, total saldo = %.2f\n",bunga,totalsaldo);
            printf("----------------------------------------------------------------------\n");
        }
    }

    return(0);
}
