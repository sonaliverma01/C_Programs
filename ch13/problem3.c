#include<stdio.h>
int main(){
    int num[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n,count = 0;
    printf("Enter number you want to search: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++) if(num[i] == n) count++;
    printf("The number %d is found %d times in array\n", n,count);
    return 0;
}