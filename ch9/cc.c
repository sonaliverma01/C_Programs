#include<stdio.h>
#include<math.h>

float dist(float x1,float x2,float y1,float y2){
    float d;
    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return d;
}

float calc_area(float x, float y, float z){
    float s, a;
    s = (x+y+z)/2;
    a = sqrt(s*(s-x)*(s-y)*(s-z));
    return a;
}
void check_point(float x1,float x2,float x3,float y1,float y2,float y3,float x,float y,float *area, int *flag){
    float a,b,c,d,e,f,a1,a2,a3, epsilon = 0.0001;
    a = dist(x1,x2,y1,y2);
    b = dist(x2,x3,y2,y3);
    c = dist(x3,x1,y3,y1);

    *area = calc_area(a,b,c);

    d = dist(x,x1,y,y1);
    e = dist(x,x2,y,y2);
    f = dist(x,x3,y,y3);

    a1 = calc_area(a,d,e);
    a2 = calc_area(c,d,f);
    a3 = calc_area(b,e,f);

    printf("%f",a1+a2+a3);
    if(fabs((a1+a2+a3)) - *area <= epsilon) *flag = 1;
    else *flag = 0;

}
int main(){
    float x1,x2,x3,y1,y2,y3,x,y,area;
    int flag;
    
    printf("Enter vertice A(x1): ");
    scanf("%f", &x1);
    printf("Enter vertice A(y1): ");
    scanf("%f", &y1);
    printf("Enter vertice B(x2): ");
    scanf("%f", &x2);
    printf("Enter vertice B(y2): ");
    scanf("%f", &y2);
    printf("Enter vertice C(x3): ");
    scanf("%f", &x3);
    printf("Enter vertice C(y3): ");
    scanf("%f", &y3);
    printf("Enter point to check(x): ");
    scanf("%f", &x);
    printf("Enter point to check(y): ");
    scanf("%f", &y);
    check_point(x1,x2,x3,y1,y2,y3,x,y,&area,&flag);
    printf("area of tringle is %f\n", area);
    if(!flag)printf("Point lies outside triangle\n");
    else printf("Point lies inside triangle\n"); 
    return 0;
}