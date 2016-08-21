#include<stdio.h>
int Lcm(int a,int b);
int main()
{
	int a,b;
	printf("Please input a and b:");
	scanf("%d%d",&a,&b);
	printf("%d和%d的最小公倍数为%d\t",a,b,Lcm(a,b));
}
int Lcm(int a,int b)
{
	int t,s;
	if(a<b)
t=a;
	else
		t=b;
	for(;t>0;t--)
	{
		if(a%t==0&&b%t==0)
		{
			s=a*b/t;
			break;
		}
		return s;
	}


}