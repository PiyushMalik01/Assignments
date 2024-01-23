#include<stdio.h>
#include<math.h>

int main(){
    int a,b ;
    
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter second number=");
    scanf("%d",&b);

    printf("%d\n",a += b);
    printf("%d\n",a -= b);
    printf("%d\n",a *= b);
    printf("%d\n",a %= b);
    printf("%d\n",a /= b);
    return 0;
}