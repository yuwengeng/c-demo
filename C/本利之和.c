#include <stdio.h>
#include <math.h>
#define rate 0.025
void main()

{
	double capital,a,deposit;
	int n;
	printf("please input capital,n:");
	scanf("%lf%d",&capital,&n);
	a=pow(1+rate,n);
	deposit=capital*a;
	printf("deposit=%f\n",deposit);





}
