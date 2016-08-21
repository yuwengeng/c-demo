#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,t;
	printf("请输入两个数：");
	scanf("%d%d",&a,&b);
    
	if(a==b)
	printf("一样大");
	else if (a>b)
	t=a,a=b,b=t;
	
	printf("%d,%d",a,b);



}