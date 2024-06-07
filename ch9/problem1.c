#include<stdio.h>
#include<math.h>

void stats(float*sum, float*avg, float*stdev){
    float n1, n2, n3, n4, n5;
    printf("Enter numner 1: ");
    scanf("%f", &n1);
    printf("Enter numner 2: ");
    scanf("%f", &n2);
    printf("Enter numner 3: ");
    scanf("%f", &n3);
    printf("Enter numner 4: ");
    scanf("%f", &n4);
    printf("Enter numner 5: ");
    scanf("%f", &n5);
    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
    *stdev = sqrt((pow(*avg-n1,2)+ pow(*avg-n2,2)+ pow(*avg-n3,2)+ pow(*avg-n4,2)+ pow(*avg-n5,2))/4);
}

int main(){
    float sum, avg, stdev;
    stats(&sum,&avg,&stdev);
    printf("Sum = %f\navg = %f\nstdev = %f\n", sum, avg, stdev);
    return 0;
}