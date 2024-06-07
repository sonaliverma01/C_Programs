#include<stdio.h>
int main(){
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int t;
    for (int i = 0; i < 10; i+=2)
    {
        t = num[i];
        num[i] = num[i+1];
        num[i+1] = t;
    }

    for (int i = 0; i < 10; i++) printf("%d\t", num[i]);
    return 0;
}