#include<stdio.h>
#include<math.h>
int main(){
    float p,r,n,q, a;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter principal: ");
        scanf("%f", &p);
        printf("Enter rate: ");
        scanf("%f", &r);
        printf("Enter number of years: ");
        scanf("%f", &n);
        printf("Enter q: ");
        scanf("%f", &q);

        a = p*pow((1+r/q), n*q);
        printf("Amount = %f\n", a);
    }   
    return 0;  
}