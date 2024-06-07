#include<stdio.h>
int nsum(int num){
    int s;
    if(num == 1) return 1;
    else s = num + nsum(num-1); 
    return s;
}

int main(){
    int sum, n = 25;
    sum = nsum(n);
    printf("Sum of %d terms is %d\n", n, sum);
    return 0;
}