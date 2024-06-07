#include<stdio.h>
int main(){
    float i;
    for (float y = 1; y < 7; y++)
    {
        for (float x = 5.5; x <= 12.5; x+=0.5)
        {
            i = 2+(y+0.5*x);
            printf("%f\t| %f\t| %f\n", y,x,i);
        }
        
    }
    return 0;
}