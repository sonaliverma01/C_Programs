#include<stdio.h>
int main(){
    int n, r1, r2, r3, r4, r5, rev;
    printf("Enter 5 digit number");
    scanf("%d", &n);   
    r5 = n%10;
    n = n/10;
    r4 = n%10;
    n = n/10;
    r3 = n%10;
    n = n/10;
    r2 = n%10;
    n = n/10;
    r1 = n%10;
    n = n/10;
    rev = r5*10000+ r4*1000+ r3* 100 + r2*10 + r1;
    printf("%d\n", rev);
    return 0;
}