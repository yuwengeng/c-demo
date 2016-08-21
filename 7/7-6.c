#include<stdio.h>
int Fact(int n);
int main()
{
	int n,x;
	printf("Please input n:");
	scanf("%d",&n);
	x=Fact(n);
	printf("1!+2!+бнбн+%d!=%d\n",n,x);


}
int Fact(int n)
{
	int i,j=1,result=0;
	for(i=1;i<=n;i++)
	{
		j=j*i;
result=result+j;
	}
	return result;
}
