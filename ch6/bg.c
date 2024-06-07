#include<stdio.h>
#include<math.h>
int main(){
    int count;
    for (int i = 1; i < 2000; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            for (int k = j; k <= i; k++)
            {
                if(pow(j,3)+pow(k,3) == i) count+=1;
            }
            
        }
        if(count >= 2)printf("Ramanujan number is %d\n", i);
    }
    return 0;
}

