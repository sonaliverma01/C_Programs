#include<stdio.h>
int main(){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 12; j++)
        {
            if(i == 0) printf("%d AM\n", j);
                
            else printf("%d PM\n", j);
                
        }
        if(i==0) printf("12 Noon\n");
        else printf("Midnight\n");
    }
    return 0;
}