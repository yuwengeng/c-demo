#include <stdio.h>
#include <math.h>
#define p 0.01875
void main()
{

int i,n=5;

scanf("%d",&i);
for(;;)
{
a=a+1000;
a=a/(1+p);
n++;
if(i==n)
break;
}
printf("Ӧ����Ǯ��Ϊ��%.2f\n",a);
}