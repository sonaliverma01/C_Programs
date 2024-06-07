#include<stdio.h>
int main(){
    float sum, fact = 1;
    for (int i = 1; i <= 7; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact*=j;
        }
        sum+= i/fact;
    }
    printf("Result is %f\n", sum);
    return 0;
}