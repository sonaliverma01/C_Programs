#include<stdio.h>
#define ISUPPER(x)(x>=65 && x<=90?1:0)
#define ISLOWER(x)(x>=97 && x<=122?1:0)
#define ISALPHA(x)(ISUPPER(x) || ISLOWER(x))
#define BIG(x,y)(x>y ? x:y)

int main(){
    char ch;
    int d,a,b;
    printf("Enter any character: \n");
    scanf("%c", &ch);
    if (ISUPPER(ch) == 1) printf("You entered a capital letter\n");
    else if (ISLOWER(ch) == 1) printf("You entered a small letter\n");
    else if (ISALPHA(ch) != 1) printf("You entered a character other than an alphabet\n");
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    d = BIG(a,b);
    printf("Bigger number is %d\n", d);
    return 0;
}