#include<stdio.h>
int main(){
    int side1, side2, side3, sum, largest;
    printf("Enter side1: ");
    scanf("%d",&side1);
    printf("Enter side2: ");
    scanf("%d",&side2);
    printf("Enter side3: ");
    scanf("%d",&side3);
    if(side1>side2){
        if(side1>side3){
            largest = side1;
            sum = side2+side3;
        }
        else{
            largest = side3;
            sum = side1+side2;
        }
    }
    else{
        if(side2>side3){
            largest = side2;
            sum = side1+ side3;
        }
        else{
            largest = side3;
            sum = side1+side2;
        }
    }
    if (sum > largest) printf("Valid triangle\n");
    else printf("Invalid triangle\n");
    return 0;
}