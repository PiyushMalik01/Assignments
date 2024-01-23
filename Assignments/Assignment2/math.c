#include<stdio.h>
#include<math.h>

int main(){
    // For Sin() and Cos() functions
    float a,b,c,d;
    printf("Enter the angle for sine and cosine =");
    scanf("%f %f",&a,&b);
    
    c=sin(a);
    d=cos(b);
    printf("sin(%f)=%f and cos(%f)=%f",a,c,b,d);
//---------------------------------------------------------------------------------------
    // For Square root of a number
    float e,f;

    printf("Enter the number=");
    scanf("%f",&e);

    f=sqrt(e);

    printf("Square root of %f = %f",e,f);
//----------------------------------------------------------------------------------------
    // For pow() function
    float base,power,ans;

    printf("Enter the Base=");
    scanf("%f",&base);

    printf("Enter the power=");
    scanf("%f",&power);

    ans=pow(base,power);
    
    printf("Answer=%f",ans);
//----------------------------------------------------------------------------------------    
   // For log() function
   float value,g;

   printf("Enter the no. for corresponding log value =");
   scanf("%f",&value);

   g=log(value);

   printf("Value for log(%f)=%f",value,g);

    return 0;
}