#include<stdio.h>
int main(){
    float dist;
    printf("Enter Distance(in km): ");
    scanf("%f", &dist);
    printf("Distance(in m): %f\n", dist*1000);
    printf("Distance(in feet): %f\n", 3280.84*dist);
    printf("Distance(in inches): %f\n", 39370*dist);
    printf("Distance(in cm): %f\n", 100000*dist);

    return 0;
}