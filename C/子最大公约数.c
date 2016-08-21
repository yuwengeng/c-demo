#include <stdio.h>
#include <stdlib.h>
int Gcd(int,int);
void main()
{
	int a,b;
	printf("Please Input a,b:");
	scanf("%d%d",&a,&b);
	printf("最大公约数:%d\n",Gcd(a,b));
}
int Gcd(int a,int b)
{
int g;
do{
	g=a%b;
	a=b;
	b=g;
}while(g!=0);
return a;
}