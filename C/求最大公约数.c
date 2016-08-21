#include "stdio.h"
long Gys(int a,int b);
void main()
{
	int a,b;
 int n;
	printf("put two number(first>second number)!\n");
	scanf("%d,%d",&a,&b);
	n=Gys(a,b);
	printf("%d\n",n);
	printf("%d\n",(a*b)/n);
 
}
long Gys(int a,int b)
{
	int x=a;
	int y=b;
	int mo;
	do{mo=x%y;
	x=y;
	y=mo;}while(mo!=0);
	return  x;






}