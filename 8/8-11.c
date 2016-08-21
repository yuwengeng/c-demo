#include<stdio.h>
#define M 100
#define N 100
void F(int a[][100],int b[][100],int m,int n);
void main()
{
	int m,n,a[M][100],b[M][100],i,j;
	printf("请输入矩阵的行数:");
	scanf("%d",&m);
	printf("请输入矩阵的列数:");
	scanf("%d",&n);
	printf("请输入一个%d*%d阶矩阵中的元素\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("请再输入一个%d*%d阶矩阵\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	F(a,b,m,n);
	return 0;
}
void F(int a[][100],int b[][100],int m,int n)
{
	int i,j,c[M][100];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
             c[i][j]=a[i][j]+b[i][j];
			 printf("%4d",c[i][j]);
		}
             putchar('\n');
	}
	
}
	
	

