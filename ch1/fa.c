#include<stdio.h>
int main(){
    float fah, cel;
    printf("Enter temp: ");
    scanf("%f", &fah);
    cel = (fah-32)*(5.0/9.0);
    printf("Temp in cel: %f", cel);
    return 0; 
}