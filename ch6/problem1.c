#include<stdio.h>
int main(){
    int prime = 1;
    for (int i = 1; i <= 3000; i++)
    {
        prime = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j == 0) prime = 0;
        }
        if(prime) printf("%d\t", i);
        
    }
    return 0;
}
