#include <stdio.h>
#include<math.h>
#define f(x) (x*x*x-x-2)
int main() {    
int i=0;
float a,b,c,fa,fb,fc;
printf("enter numbers=");
scanf("%f %f",&a,&b);
fa=f(a);
fb=f(b);
do
{
    c=((a*fb)-(b*fa))/(fb-fa);
    fc=f(c);
    if(fc==0)
    {
        printf("appox root is %d",c);
    }
    if(fa*fb>0)
    {
        printf("invalid");
    }
    if(fa*fb<0)
    {
        if(fa*fc<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }i++;
} while (fabs(fc)>0.0001);
printf("root is %f\n",c);
printf("number of iteration %d",i);
 
    return 0;
}