#include<stdio.h>

int main(){
    int a,b;
    float c;

    printf("Enter Divisor=");
    scanf("%d",&a);
    printf("Enter Divident=");
    scanf("%d",&b);

    c = (float) a / b;

    printf("Answer=%f",c);

    return 0;

}