#include<stdio.h>
#include"areaperi.h"

int main(){
    float r, s, side1, side2, side3, base, height, p_cir, a_cir, p_squ, a_squ, p_tri, a_tri;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Enter side of square: ");
    scanf("%f", &s);
    printf("Enter side1 of triangle: ");
    scanf("%f", &side1);
    printf("Enter side2 of triangle: ");
    scanf("%f", &side2);
    printf("Enter side3 of triangle: ");
    scanf("%f", &side3);
    printf("Enter base of triangle: ");
    scanf("%f", &base);
    printf("Enter sheightof triangle: ");
    scanf("%f", &height);
    p_cir = PERIC(r);
    a_cir = AREAC(r);
    p_squ = PERIS(s);
    a_squ = AREAS(s);
    p_tri = PERIT(side1,side2,side3);
    a_tri = AREAT(base,height);
    printf("Petimeter of circle is %f\nArea of circle is %f\nPetimeter of square is %f\nArea of square is %f\nPetimeter of triangle is %f\nArea of triangle is %f\n", p_cir,a_cir,p_squ,a_squ,p_tri,a_tri);
    return 0;
}