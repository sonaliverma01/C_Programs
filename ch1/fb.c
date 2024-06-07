#include<stdio.h>
int main(){
    int l = 1189, s = 841, temp;
    for (int i = 1; i < 8; i++)
    {
        printf("A%d = %d mm X %d mm\n", i-1,l,s);
        temp = l;
        l = s;
        s = temp/2;
    }    
}