#include<stdio.h>
int main(){
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.4*basic;
    hra = 0.2*basic;
    gross = basic+da+hra;
    printf("dearness allowance is: %f\n", da);
    printf("house rent allowance is: %f\n", hra);
    printf("Gross salary is: %f\n", gross);
    return 0;
}