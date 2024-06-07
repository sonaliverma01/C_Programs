#include<stdio.h>
void factorise(int num, int i){
    if(i<=num){
        if(num%i == 0){
            printf("%d ", i);
            num = num/i;
        }
        else i++;
        factorise(num, i);
    }
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Prime factors are: ");
    factorise(num,2);
    return 0;
}