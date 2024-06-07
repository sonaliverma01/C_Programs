#include<stdio.h>
#include<math.h>
int main(){
    float x, sum;
    printf("Enter x: ");
    scanf("%f", &x);
    sum = (x-1)/x;
    for (int i = 2; i < 8; i++)
    {
        sum+= 0.5* pow((x-1)/x,i);
    }
    printf("Natural logarithm of 7 terms is %f\n", sum);
    return 0;
}