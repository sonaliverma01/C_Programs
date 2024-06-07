#include<stdio.h>
float power(float x, float y){
    float i=1;
    float result = 1;
    for (int i = 0; i < y; i++)
    {
        result = result*x;
    }
    return result;
}
int main(){
    float n1, n2, result = 1, pow;
    printf("Enter 1st number: ");
    scanf("%f", &n1);
    printf("Enter 2nd number: ");
    scanf("%f", &n2);
    pow = power(n1,n2);
    printf("%f to the power %f is %f\n", n1, n2, pow);
    return 0;
    
}