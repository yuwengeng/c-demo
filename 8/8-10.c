#include<stdio.h>
#define N 40
int F(int a[][40],int x);
int G(int a[][40],int x);
int main()
{
	int i,j,a[N][40],m,n,x;
	printf("请输入矩阵的行数或列数:");
	scanf("%d",&x);
	printf("请输入%d*%d矩阵中的元素:\n",x,x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
            scanf("%d",&a[i][j]);
		}
	}
	m=F(a,x);
	n=G(a,x);	
	printf("正对角线元素之和为%d\n",m);
    printf("负对角线元素之和为%d\n",n);
}
int F(int a[][40],int x)
{
	int i,m=0;
	for(i=0;i<x;i++)
	{
	
		m=m+a[i][i];
	}
	return m;

}
int G(int a[][40],int x)
{
	int i,n=0;
	for(i=0;i<x;i++)
	{
	n=n+a[i][x-i-1];
	}
	return n;
}


		
		

