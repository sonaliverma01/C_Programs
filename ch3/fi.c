#include<stdio.h>
int main(){
    int yr, base_yr=1900, lp, non_lp, years_bw, total_days, day;
    printf("Enter year: ");
    scanf("%d", &yr);

    years_bw = (yr-1)-base_yr; //total no of years between base year and year-1 entered
    lp = years_bw/4;
    non_lp = years_bw-lp;
    total_days = (non_lp*365 + lp*366)+1; // total no of days from jan 1, 1900
    day = total_days%7; // 1 Jan of 1900 was monday

    if(day == 0) printf("Monday\n");
    else if(day == 1) printf("Tuesday\n");
    else if(day == 2) printf("Wednesday\n");
    else if(day == 3) printf("Thursday\n");
    else if(day == 4) printf("Friday\n");
    else if(day == 5) printf("Saturday\n");
    else if(day == 6) printf("Sunday\n");
    return 0;
}