#include<stdio.h>
#include<math.h>

int main(){
    float time,principle,rate,periods,Amount;
    int n;

    printf("Enter principle Amount=");
    scanf("%f",&principle);

    printf("Enter Interest Rate in %%=");
    scanf("%f",&rate);

    printf("Enter no. of Years=");
    scanf("%f",&time);

    printf("No. of times interest applied per time period=");
    scanf("%d",&n);

    Amount=principle*pow(1+(rate/(100.0*n)),n*time);

    printf("Final Amount=%f \n",Amount);

    float CI= Amount-principle ;
    printf("Compound interest is %f",CI);

      return 0;
}