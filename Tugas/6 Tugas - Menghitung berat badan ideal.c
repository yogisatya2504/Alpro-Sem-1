/*
program menghitung berat badan ideal
*/

#include <stdio.h>

int main(){
    char j_kelamin;
    int berat, tinggi;
    double t_obesitas, b_ideal;

    printf("Input jenis kelamin(l/p) : ");
    scanf("%c",&j_kelamin);
    printf("Input berat badan        : ");
    scanf("%d",&berat);
    printf("Input tinggi badan       : ");
    scanf("%d",&tinggi);

    t_obesitas = berat / (tinggi * tinggi * 0.0001);

    if (j_kelamin == 'l'){
        if (t_obesitas > 27){
            printf("\nAnda termasuk orang yang obesitas");
        }else if (t_obesitas >= 23){
            printf("\nAnda termasuk orang yang kegemukan");
        }else if (t_obesitas >= 17){
            printf("\nAnda termasuk orang yang normal");
        }else{
            printf("\nAnda termasuk orang yang kurus");
        }
        b_ideal = (tinggi - 100) - ((tinggi - 100) * 0.1);
    }else if (j_kelamin == 'p'){
        if (t_obesitas > 27){
            printf("\nAnda termasuk orang yang obesitas");
        }else if (t_obesitas >= 25){
            printf("\nAnda termasuk orang yang kegemukan");
        }else if (t_obesitas >= 18){
            printf("\nAnda termasuk orang yang normal");
        }else{
            printf("\nAnda termasuk orang yang kurus");
        }
        b_ideal = (tinggi - 100) - ((tinggi - 100) * 0.15);
    }
    printf("\nBerat badan ideal anda adalah : %.2f\n",b_ideal);

    return(0);
}
