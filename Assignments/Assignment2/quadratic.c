// program for finding roots of a quadratic equation
#include<stdio.h>
#include<math.h>

int main(){
    float coffofx,coffofx2,constant,a;
    
    printf("Enter Coefficient of x=");
    scanf("%f",&coffofx);
    printf("Enter coefficient of x2=");
    scanf("%f",&coffofx2);
    printf("Enter the value of constant=");
    scanf("%f",&constant);

    a=pow(coffofx,2)-(4*coffofx2*constant);

    printf("First Root of quadratic equation =%f\n",(-coffofx+(pow(a,1.0/2.0)))/(2*coffofx2));
    printf("Second Root of quadratic equation =%f",(-coffofx-(pow(a,1.0/2.0)))/(2*coffofx2));
   

    return 0;
}