#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,t;
	printf("��������������");
	scanf("%d%d",&a,&b);
    
	if(a==b)
	printf("һ����");
	else if (a>b)
	t=a,a=b,b=t;
	
	printf("%d,%d",a,b);



}