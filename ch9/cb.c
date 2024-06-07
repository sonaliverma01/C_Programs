#include<stdio.h>
void convert(float kg, float*g, float*ton, float*pound){
    *g = 1000*kg;
    *ton = 0.0011*kg;
    *pound = 2.205*kg;
}
int main(){
    float kg,g,ton,pound;
    printf("Enter weight in kg:");
    scanf("%f", &kg);
    convert(kg, &g, &ton, &pound);
    printf("Weight in g = %f\nWeight in tons = %f\nWeight in pound = %f", g,ton,pound);
    return 0;
}