#include <stdio.h>
#include <math.h>
void main()
{
	int n=1,count=1,m=1;
	float x;
	double sum,term;
	printf("«Î ‰»Îx:");
	scanf("%f",&x);
	sum=x;
	do{
	
		term=pow(-1,count)*(float)(pow(x,n))/m;
        sum=sum+term;
		count++;
		n=n+2;

}while(fabs(pow(x,n))<pow(10,-5));
printf("sin(x)=%f,count=%d\n",sum,count);
}