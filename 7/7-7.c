#include<stdio.h>

int Gcd1(int a,int b);
int Gcd2(int a,int b);
int Gcd3(int a,int b);

int main()
{
	int a,b,c;
	printf("input a,b:");
	scanf("%d%d",&a,&b);
	
	printf("1    穷举法\n2    欧几里德算法\n3    递归方法\n");
	printf("请选择  相关求解方法：");
	scanf("%d",&c);
	
	switch(c)
	{
	case 1:
		{
			printf("两数的最大公约数是:%d\n",Gcd1(a,b));
		}
	case 2:
		{
			printf("两数的最大公约数是:%d\n",Gcd2(a,b));
		}
	case 3:
		{
			printf("两数的最大公约数是:%d\n",Gcd3(a,b));
		}
	}	
}

int Gcd1(int a,int b)
{
	int i,t;
	if(a>b)
		t=b;
	else
		t=a;
	for(i=1;i<=t;i++)
	{
		if(a%i==0&&b%i==0)
			break;
			
	}
	return i;
		
}


int Gcd2(int a,int b)
{
	int g;
	do
	{
		g=a%b;
		a=b;
		b=g;
	}while(g!=0);
	
	return a;
}	

int Gcd3(int a,int b)
{
	if(a>b)
		return Gcd2(a-b,b);
	if(a<b)
		return Gcd2(a,b-a);
	if(a==b)
		return a;
	else
		return 0;
}







