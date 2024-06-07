#include<stdio.h>
int main(){
    int Ram, Shyam, Ajay;
    printf("Enter age of Ram: ");
    scanf("%d", &Ram);
    printf("Enter age of Shyam: ");
    scanf("%d", &Shyam);
    printf("Enter age of Ajay: ");
    scanf("%d", &Ajay);
    if(Ram<Shyam){
        if(Ram<Ajay) printf("Ram is youngest\n");
        else printf("Ajay is youngest\n");
    }
    else if(Shyam<Ram){
        if(Shyam<Ajay) printf("Shyam is youngest\n");
        else printf("Ajay is youngest\n");
    }
    else printf("Ajay is youngest\n");
    return 0;
}