#include<stdio.h>
int check_lp(int year){
    if(year%400 == 0 || year%100 != 0 && year%4 == 0) return(1); 
    else return(0); 
    return 0;
}
int main(){
    int yr, ch;
    printf("Enter year: ");
    scanf("%d", &yr);
    ch = check_lp(yr);
    if(!ch) printf("Not a leap year\n");
    else printf("Leap year\n");
    return 0;
}