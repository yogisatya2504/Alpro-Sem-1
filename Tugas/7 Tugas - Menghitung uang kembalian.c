/*
program menghitung uang kembalian
Note :
jika total belanja >= 500000 : diskon = 15%
jika total belanja >= 100000 : diskon = 10%
jika total belanja >= 50000  : diskon = 5%
*/

#include <stdio.h>

int main(){
    int b_barang, h_barang, u_dibayarkan, t_belanja, diskon=0;
    double t_harga, t_diskon, t_kembalian;

    printf("Input banyak barang\t= ");
    scanf("%d",&b_barang);
    printf("Input harga barang\t= ");
    scanf("%d",&h_barang);
    printf("Input uang dibayarkan\t= ");
    scanf("%d",&u_dibayarkan);

    t_belanja = b_barang * h_barang;
    if (t_belanja >= 500000){
        diskon = 15;
    }else if (t_belanja >= 100000){
        diskon = 10;
    }else if (t_belanja >= 50000){
        diskon = 5;
    }
    t_diskon = t_belanja * diskon / 100;
    t_harga = t_belanja - t_diskon;
    t_kembalian = u_dibayarkan - t_harga;

    printf("--------------------------------------\n");
    printf("Total belanja : %d\n",t_belanja);
    printf("Diskon        : %.2f\t\%d%c\n",t_diskon,diskon,'%');
    printf("--------------------------------------\n");
    printf("Total harga   : %.2f\n",t_harga);
    printf("Dibayarkan    : %d\n",u_dibayarkan);
    printf("--------------------------------------\n");
    printf("Kembalian     : %.2f\n",t_kembalian);

    return(0);
}
