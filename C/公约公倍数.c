#include <stdio.h>
void main()
{
    int a,b,m,n;
	int dm;
	printf("����������������");
	scanf("%d%d",&a,&b);
	m=a;n=b;
	  do
	{dm=m%n;
	m=n;
	n=dm;
	}
	  while (dm!=0);
	  printf("%d��%d�����Լ��%d\n",a,b,m);
	  printf("%d��%d����С������%d\n",a,b,a*b/m);




}