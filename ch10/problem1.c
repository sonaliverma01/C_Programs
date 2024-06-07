#include<stdio.h>
int rec_sum(int n){
    int s, rem;
    if(n!=0){
        rem = n%10;
        s= rem + rec_sum(n/10);
    }
    else return 0;
    return s;
}

int main(){
    int n, sum;
    printf("Enter 5 digit number: ");
    scanf("%d", &n);
    sum = rec_sum(n);
    printf("Sum of digits is %d\n", sum);
    return 0;
}