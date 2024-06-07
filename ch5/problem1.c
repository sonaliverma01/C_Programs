#include<stdio.h>
int main(){
    int hours, overpay, i=1;
    while (i<=2)
    {
        printf("Enter no of hours: ");
        scanf("%d", &hours);
        if(hours>=40) overpay = (hours-40)*120;
        else overpay = 0;
        printf("Overpay = %d\n", overpay);
        i++;
    }
    return 0;
}