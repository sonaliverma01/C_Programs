#include<stdio.h>
int main(){
    float sp, cp, p, l;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    p = sp-cp;
    if (p>0)
        printf("Profit of Rs. %f\n", p);
    else if (p<0)
        printf("Loss of Rs. %f\n", cp-sp);
    else
        printf("No profit no loss\n");    
}