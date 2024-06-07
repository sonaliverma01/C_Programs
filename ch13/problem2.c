#include<stdio.h>
int main(){
    int arr1[5],arr2[5],j;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0, j = 4; i < 5; i++,j--) arr2[j] = arr1[i];
    for (int i = 0; i < 5; i++) printf("%d\t",arr2[i]);
    return 0;
}