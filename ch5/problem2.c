#include<stdio.h>
int main(){
    int num, fact = 1, i=1;
    printf("Enter number: ");
    scanf("%d", &num);
    while (i<=num)
    {
        fact*=i;
        i++;
    }
    printf("Factorial is %d\n", fact);
    return 0;
}