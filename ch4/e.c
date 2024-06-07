#include<stdio.h>
int main(){
    // a(1)
    // char ch;
    // printf("Enter character: ");
    // scanf("%c", &ch);
    // (ch>=97 && ch<=122)? printf("Lower case\n"): printf("Not lower case\n");
    //a(2)
    // ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))? printf("Special case\n"): printf("Not special case");

    // int y, lp;
    // printf("Enter year: ");
    // scanf("%d", &y);
    // lp = (y%100 ==0)? (y%400 == 0) : (y%4 == 0);
    // if(lp) printf("Leap year\n");
    // else printf("Not leap year\n");
    // return 0;

    //(c)
    // int n1, n2, n3, result;
    // printf("Enter n1: ");
    // scanf("%d", &n1);
    // printf("Enter n2: ");
    // scanf("%d", &n2);
    // printf("Enter n3: ");
    // scanf("%d", &n3);
    // result = (n1>n2)?((n1>n3)? n1: n3):((n2>n3)?n2: n3);
    // printf("Largest number is %d\n", result);

    //(e)
    float sal;
    printf("Enter salary: ");
    scanf("%f", &sal);
    (sal>=25000 && sal<=40000)? printf("Manager\n"): ((sal>=15000 && sal<25000)? printf("Accountant\n"): printf("Clerk\n"));
    return 0;
}