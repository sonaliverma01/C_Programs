// #include<stdio.h>
// int main(){
//     int num, oct = 0, revoct = 0, rem;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     while(num!=0){
//     rem = num%8;
//     num/=8;
//     revoct = revoct*10+rem;
//     }
//     printf("%d\n", revoct); 

//     while (revoct!=0)
//     {
//         rem = revoct%10;
//         revoct/=10;
//         oct = oct*10+rem;
//     }
//     printf("Octal equivalent is %d\n", oct);
//     return 0;
// }

#include<stdio.h>

int main() {
    int num, oct = 0, rem, place = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 8;
        num /= 8;
        oct += rem * place;
        place *= 10;
    }

    printf("Octal equivalent is %d\n", oct);
    return 0;
}

