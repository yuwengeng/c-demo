#include<stdio.h>
#define X 40
main()
{
	int i,j,n,m=0;
	int matrix[X][X];
	printf("�����뷽����ÿ�л�ÿ��Ԫ�ظ���:");
	scanf("%d",&n);
	printf("�����뷽���е�Ԫ��:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
		m=m+matrix[i][i];
	}
	printf("���Խ���Ԫ��֮��Ϊ%d\n",m);
}