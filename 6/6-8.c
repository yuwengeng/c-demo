#include <stdio.h>
#include <math.h>
void main()
{
   int a=1,c,i;
   float b,n=0;

for(i=0;;i++)
{
c=pow(-1,i);
b=1.0/a*c;

n=n+b;
a=a+2;
if(1.0/a<0.00001)
break;
}
printf("π=%f\n",4*n);
printf("累加项数为%d\n",i);
}