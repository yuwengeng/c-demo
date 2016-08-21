#include<stdio.h>
#include<math.h>
main()
{
double i=1,j=1;
double e=1,count=1;
do{ 
	j=j*i;
    e=e+(1.0/j);
    
    i++;
	count++;

}while(1.0/j>pow(10,-5));
printf("e=%.4f  count=%.0f\n",e,count);

}