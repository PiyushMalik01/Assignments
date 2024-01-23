#include<stdio.h>
#include<math.h>

int main(){
      int interest,time,principle;
      int SI ,total;

      printf("Enter principle amount=");
      scanf("%d",&principle);

      printf("Enter Interest rate=");
      scanf("%d",&interest);

      printf("Enter Time duration=");
      scanf("%d",&time);

      SI=(principle*interest*time)/100;
      
      printf("SI = %d",SI);

    
      return 0;

}