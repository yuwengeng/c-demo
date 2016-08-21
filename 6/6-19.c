#include<stdio.h>
void main()
{
	double j,sum;
	double i=0.02;
	for(j=1;j<=30;j++)
	{
		sum=i*2;
		i=sum;
	}
	    printf("富翁给陌生人%.0lf元\n",i);
		printf("陌生人给富翁%d元\n",100000*30);
}