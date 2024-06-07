#include<stdio.h>
int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact*= i;  
    return fact;
}
int main(){
    int num, fact;
    printf("Enter number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of number entered is %d\n", fact);
    return 0;
}
