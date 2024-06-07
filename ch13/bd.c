#include<stdio.h>
int main(){
    int n = 5,arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        for (int j = i; j >=0; j--)
        {
            if(arr[j]>key) arr[j+1] = arr[j];
            else arr[j] = key;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}