#include<stdio.h>
void pow_fact(float n1, float n2, int num, float *pow, int *fact){
    *pow = 1;
    for (int i = 1; i <= n2; i++)
    {
        *pow*=n1;
    }
    *fact = 1;
    for (int i = 1; i <= num; i++)
    {
        *fact*=i;
    }
    
}
int main(){
    float a,b, pow;
    int num, fact;
    printf("Enter base number: ");
    scanf("%f", &a);
    printf("Enter power: ");
    scanf("%f", &b);
    printf("Enter number for factorial:");
    scanf("%d", &num);
    pow_fact(a,b,num,&pow,&fact);
    printf("Power = %f\nFactorial = %d\n", pow, fact);
    return 0;
}