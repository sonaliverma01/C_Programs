#include<stdio.h>
int rec_binary(int num){
    int r,b;
    if(num!=0){
        r = num%2;
        // num = num/2;
        b = r + 10* rec_binary(num/2);
    }
    else return 0;
    return b;
}

int binary(int num){
    int bin = 0,r,place = 1;
    while (num!= 0)
    {   r = num%2;
        num/=2;
        bin = bin + r * place;
        place*=10;
    }
    return bin;
}

int main(){
    int n, bin;
    printf("Enter number: ");
    scanf("%d", &n);
    bin = rec_binary(n);
    printf("Binary equivalent is: %d\n", bin);
    return 0;
}