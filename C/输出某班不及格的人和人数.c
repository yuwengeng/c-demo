#include "stdio.h"
#define N 40
#include "stdlib.h"
void main()
{
	int score[N],n,i;
	int p=0;
	printf("请输入人数！\n");
	scanf("%d",&n);
	printf("put all score!\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	for(i=0;i<n;i++)
	{
		if(score[i]<60)
		{
			printf("%d\n",score[i]);
			p++;
		
		}
	
	}
	printf("不及格的人数有%d人\n",p);









}