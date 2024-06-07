#include<stdio.h>
int main(){

    int n, r1, r2, r3, r4, r5, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    r5 = n%10;
    n/=10;
    r4 = n%10;
    n/=10;
    r3 = n%10;
    n/=10;
    r2 = n%10;
    n/=10;
    r1 = n%10;
    n/=10;
    sum = r5+r4+r3+r2+r1;
    printf("Sum is %d\n", sum);
    return 0;
}