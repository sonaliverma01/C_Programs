#include<stdio.h>
int romanise(int year, int n, char ch){
    int j;
    j = year/n;
    for (int i = 0; i < j; i++) printf("%c", ch);
    return (year%n);
}
int main(){
    int yr;
    printf("Enter year: ");
    scanf("%d", &yr);
    yr = romanise(yr, 1000, 'M');
    yr = romanise(yr, 500, 'D');
    yr = romanise(yr, 100, 'C');
    yr = romanise(yr, 50, 'L');
    yr = romanise(yr, 10, 'X');
    yr = romanise(yr, 5, 'V');
    yr = romanise(yr, 1, 'I');
    return 0;
}