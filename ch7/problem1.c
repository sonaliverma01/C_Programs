#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch, num, fact;
    while (1)
    {
        printf("Choose from the following\n1) Factorial\n2) Check prime\n3) Odd or even\n4) Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter number: ");
            scanf("%d", &num);
            fact = 1;
            for (int i = 1; i <= num; i++)
                fact*= i; 
            printf("Factorial is %d\n", fact);  
            break;

        case 2:

            printf("Enter number: ");
            scanf("%d", &num);
            int prime = 1;    
            for (int j = 2; j <= num/2; j++)
            {
                if (num%j == 0) prime = 0;
            }
            if(prime) printf("%d is prime number\n",num);
            break;
        
        case 3:
            printf("Enter number: ");
            scanf("%d", &num);
            if(num%2 == 0) printf("Even number\n");
            else printf("Odd number\n");
            break;
        
        case 4:
            exit(0);
        
        default:
            printf("Enter valid option!\n");
            break;
        }
    }
    return 0;
}