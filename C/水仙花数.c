#include <stdio.h>                                                            
void main()
{
	int a,b,c,i=100;
	do{a=i/100;
	   b=(i-100*a)/10;
	   c=i%10;
       if(i==a*a*a+b*b*b+c*c*c)
		   printf("%d是水仙花数\n",i);
	       i++;
	}while(i<=999);
}
