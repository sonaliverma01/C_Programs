#include<stdio.h>
int main(){
    int num, neg = 0, pos = 0, zero = 0;
    char ch = 'y';
    while(ch == 'y' || ch == 'Y'){
        printf("Enter number: ");
        scanf("%d", &num);
        if(num<0) neg+=1;
        else if(num>0) pos+=1;
        else zero+=1;
        printf("Do you want to enter a number?(enter y or n): ");
        scanf(" %c", &ch);
    }
    printf("Positive numbers= %d\nNegative numbers= %d\nZeros= %d\n", pos, neg, zero);
    return 0;
}