#include<stdio.h>
int main(){
    int n, num, min, max = 0;
    printf("How many numbers you want to enter?: ");
    scanf("%d", &n);
    printf("Enter number: ");
    scanf("%d", &num);
    min = num;
    for (int i = 0; i < n-1; i++)
    {
        if(num>max) max = num;
        else if(num<min) min = num;
        printf("Enter number: ");
        scanf("%d", &num);
    }
    printf("Range = %d\n", max-min);
    return 0;
}