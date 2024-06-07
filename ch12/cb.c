#include<stdio.h>
#define AIRTHMEAN(x,y)((x+y)/2)
#define ABS(x)(x<0? (-(x)): x)
#define CONV(x)((x>='a' && x<='z')?((x-'a')+'A'):x)
#define FINDBIG(x,y,z)((x>y)?((x>z)?x:z):((y>z)?y:z))

int main(){
    int mean,ab,largest,x=4,y=6,z=-2;
    char alph,ch = 'b';
    mean = AIRTHMEAN(x,y);
    ab = ABS(z);
    alph = CONV(ch);
    largest = FINDBIG(y,z,x);
    printf("%d\n%d\n%c\n%d\n",mean,ab,alph,largest);
    return 0;
}