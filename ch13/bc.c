#include<stdio.h>
int main(){
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d",&(*(arr+i)));
    }
    
    int smallest = *arr;
    for (int i = 0; i < n; i++)
    {
        if(*(arr+i)<smallest) smallest = *(arr+i);
    }
    printf("Smallest element is %d\n", smallest);
    return 0;
}