#include<stdio.h>
#define N 40
int F(int a[][40],int x);
int G(int a[][40],int x);
int main()
{
	int i,j,a[N][40],m,n,x;
	printf("��������������������:");
	scanf("%d",&x);
	printf("������%d*%d�����е�Ԫ��:\n",x,x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
            scanf("%d",&a[i][j]);
		}
	}
	m=F(a,x);
	n=G(a,x);	
	printf("���Խ���Ԫ��֮��Ϊ%d\n",m);
    printf("���Խ���Ԫ��֮��Ϊ%d\n",n);
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


		
		

