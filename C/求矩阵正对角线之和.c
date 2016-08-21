#include<stdio.h>
#define X 40
main()
{
	int i,j,n,m=0;
	int matrix[X][X];
	printf("请输入方阵中每行或每列元素个数:");
	scanf("%d",&n);
	printf("请输入方阵中的元素:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
		m=m+matrix[i][i];
	}
	printf("正对角线元素之和为%d\n",m);
}