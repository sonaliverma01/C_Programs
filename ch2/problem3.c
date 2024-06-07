#include<stdio.h>
int main(){
    int amt, rs100, rs50, rs10, rs5, rs2, rs1, total;
    printf("Enter amount: ");
    scanf("%d", &amt);
    rs100 = amt/100;
    amt%=100;
    rs50 = amt/50;
    amt%=50;
    rs10 = amt/10;
    amt%=10;
    rs5 = amt/5;
    amt%=5;
    rs2 = amt/2;
    amt%=2;
    rs1 = amt/1;
    amt%=1;
    total = rs100+ rs50+ rs10+ rs5+ rs2+ rs1;
    printf("%d\n", total); 
    return 0;
}