#include<stdio.h>
#include<math.h>

int main(){

    float Ta,Da,Salary,Basic;

    printf("Basic Salary=");
    scanf("%f",&Basic);

    Ta=0.12*Basic;
    Da=0.1*Basic;

    Salary=Basic+Ta+Da;

    printf("Gross Salary=%f",Salary);

    return 0;
}

