#include<stdio.h>
int main(){
    int a,b;
    printf("Enter length: ");
    scanf("%d", &a);
    printf("Enter bredth: ");
    scanf("%d", &b);
    if(a*b > 2*(a+b)) printf("Area is greater than perimeter\n");
    else printf("Perimeter is greater than area\n");
    return 0;
}