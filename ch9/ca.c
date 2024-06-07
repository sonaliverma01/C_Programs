#include<stdio.h>
void rotate(int *n1, int *n2, int *n3){
    int t;
    t = *n3;
    *n3 = *n2;
    *n2 = *n1;
    *n1 = t;
}
int main(){
    int x,y,z;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Enter value of z: ");
    scanf("%d", &z);
    rotate(&x,&y,&z);
    printf("x = %d\ny = %d\nz = %d\n", x,y,z);
    return 0;
}