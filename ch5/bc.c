#include<stdio.h>
int main(){
    int ch, person, computer, turn = 0;
    while(1){
        printf("Welcome\nSelect from the following:\n1) Rules\n2) Play\n3) Quit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("The rules are:\n1) There are 21 matchsticks\n2) You can pick 1,2,3 or 4 matchsticks only\n3) Whoever is forced to pick the last matchstick loses the game\n");
            break;
        case 2:
            while(turn<4){
                printf("Choose no. of matchsticks: ");
                scanf("%d", &person);
                if(person<1 || person>4){
                // if(person!=1 || person!=2 || person!=3 || person!=4){
                    printf("Please choose valid no of matchsticks!\n");
                }
                else{
                    computer = 5-person;
                    printf("Matchsticks chosen by computer are %d\n", computer);
                    turn+=1;
                }
            }
            printf("You Lost!\nBetter luck next time");
            break;
        case 3:
            return 0;
    
        default:
            printf("Please select valid option\n");
            break;
        }
    }
    return 0;
}