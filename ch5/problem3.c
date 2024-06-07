#include<stdio.h>
int main(){
    float n1, n2, result = 1;
    int i = 1;
    printf("Enter 1st number: ");
    scanf("%f", &n1);
    printf("Enter 2nd number: ");
    scanf("%f", &n2);
    while (i<=n2)
    {
        result*=n1;
        i++;
    }
    printf("%f to the power %f is %f\n", n1, n2, result);
    return 0;
}