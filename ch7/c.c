#include<stdio.h>
int main(){
    int class, num;
    printf("Enter class obtained: ");
    scanf("%d", &class);
    printf("Enter number of subjects failed: ");
    scanf("%d", &num);
    switch (class)
    {
    case 1:
        if(num>3) printf("No grace marks awarded\n");
        else printf("Total grace marks awarded are %d\n", num*5);
        break;

    case 2:
        if(num>2) printf("No grace marks awarded\n");
        else printf("Total grace marks awarded are %d\n", num*4);
        break;

    case 3:
        if(num>1) printf("No grace marks awarded\n");
        else printf("Total grace marks awarded are %d\n", 5);
        break;

    
    default:
        printf("Enter valid class!\n");
        break;
    }
    return 0;
}