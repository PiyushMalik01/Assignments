#include<stdio.h>

int main(){
    int fanta,coke,cup;

    printf("Pour fanta in ml=");
    scanf("%d",&fanta);
    printf("Pour coke in ml=");
    scanf("%d",&coke);

    cup=fanta;
    printf("Poured %d ml fanta in cup\n",cup);
    fanta=coke;
    printf("Poured %d ml coke in place of fanta\n",fanta);
    coke=cup;
    printf("Poured %d ml coke from cup",coke);

    return 0;
}