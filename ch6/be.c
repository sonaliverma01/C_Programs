#include<stdio.h>
#include<math.h>
int main(){
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            if(j<i) continue;
            for (int k = 1; k <= 30; k++)
            {
                if(k<i || k<j) continue;
                if(pow(i,2)+pow(j,2) == pow(k,2)) printf("Pythagorean triplet is %d %d %d\n", i,j,k);
            }
            
        }
        
    }
    return 0;
}