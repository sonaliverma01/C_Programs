#include<stdio.h>
int main(){
    int num[25], pos = 0, neg = 0, even = 0, odd = 0, n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num[i]);
        if(num[i]>0) pos++;
        else if(num[i]<0) neg++;
        if(num[i]%2==0) even++;
        else odd++;
    }
    printf("Positive numbers are %d\nnegative numbers are %d\nEven numbers are %d\nOdd numbers are %d\n", pos,neg,even,odd);
    return 0;
}