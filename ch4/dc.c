#include<stdio.h>
int main(){
    float hard, carb, tens;
    int i, ii, iii;
    printf("Enter hardness: ");
    scanf("%f", &hard);
    printf("Enter carbon content: ");
    scanf("%f", &carb);
    printf("Enter tensile strength: ");
    scanf("%f", &tens);
    i = hard > 50;
    ii = carb < 0.7;
    iii = tens > 5600;
    if(i && ii && iii) printf("Grade 10\n");
    else if(i && ii && !iii) printf("Grade 9\n");
    else if(ii && iii && !i) printf("Grade 8\n");
    else if(i && iii && !ii) printf("Grade 7\n");
    else if((i && !iii && !ii) || (ii && !iii && !i)|| (iii && !ii && !i) ) printf("Grade 6\n");
    else if(!i && !ii && !iii) printf("Grade 5\n");
    return 0;
}