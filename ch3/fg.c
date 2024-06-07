#include<stdio.h>
#include<math.h>
int main(){
    int x1, x2, x3, y1, y2, y3, ab, bc, ac;
    printf("Enter point 1, x1: ");
    scanf("%d", &x1);
    printf("Enter point 1, y1: ");
    scanf("%d", &y1);
    printf("Enter point 2, x2: ");
    scanf("%d", &x2);
    printf("Enter point 2, y2: ");
    scanf("%d", &y2);
    printf("Enter point 3, x3: ");
    scanf("%d", &x3);
    printf("Enter point 3, y3: ");
    scanf("%d", &y3);
    ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    ac = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    if(ab+bc == ac)printf("Colinear\n");
    else if(ac+bc == ab)printf("Colinear\n");
    else if(ab+ac == bc)printf("Colinear\n");
    else printf("Not colinear");
    return 0;
}