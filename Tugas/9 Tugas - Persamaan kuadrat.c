/*
program persamaan kuadrat
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, d;
    double x1,x2;

    printf("Input a = ");
    scanf("%d",&a);
    printf("Input b = ");
    scanf("%d",&b);
    printf("Input c = ");
    scanf("%d",&c);
    printf("\nFungsi  = %dx ^ 2 + %dx + %d\n",a,b,c);

    d = b * b - 4 * a * c;
    if (d > 0){
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
    }else if (d = 0){
        x1 = -b / 2 * a;
        x2 = x1;
    }else{
        printf("Akar-akarnya berupa bilangan imaginer\n");
        return(0);
    }
    printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);

    return(0);
}
