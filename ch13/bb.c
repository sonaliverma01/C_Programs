#include<stdio.h>
int main(){
    int n = 7,flag = 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n/2; i++)
    {
        if(arr[i]!=arr[n-(i+1)]) 
        {
            flag = 0;
            break;
        }
    }
    if(!flag) printf("Array is not a palindrome\n");
    else printf("Array is a palindrome\n");
    return 0;
}