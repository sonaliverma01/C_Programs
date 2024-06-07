#include<stdio.h>
int main(){
    int num,numcpy, armst = 0, digit;
    for (int i = 1; i <= 500; i++)
    {
        num = i;
        armst = 0;
        while (num!=0)
        {
            digit = num%10;
            num/=10;
            armst+= (digit*digit*digit);
        }
        if(armst == i) printf("%d\n", i);
    }
    return 0;
}