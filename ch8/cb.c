#include<stdio.h>
void prime_fact(int num){
    int numcpy;
    numcpy = num;
    for (int i = 2; i <= numcpy/2; i++)
    {
    if(num%i == 0){
        printf("%d", i);
        num/=i;
        i--;
        }
    }
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    prime_fact(num);
    return 0;
}

