#include <stdio.h>
#define N 10
void InputArray(int p[][N],int m,int n);
void OutputArray(int p[][N],int m,int n);
int main()
{
	int a[3][N];
	printf("Input 3*4 numbers:\n");
	InputArray(a,3,4);
	OutputArray(a,3,4);
	return 0;
}
void InputArray(int p[][N],int m,int n)
{
    int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
}
void OutputArray(int p[][N],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",p[i][j]);
		}
		printf("\n");
	}
}

