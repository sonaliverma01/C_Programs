#include<stdio.h>
#include"interest.h"
int main(){
    float si,amt,p= 1000,r=2,t=2;
    si = SIMPLE_INT(p,r,t);
    amt = AMOUNT(p,r,t);
    printf("SI is %f\nAmount is %f\n", si,amt);
    return 0;
}