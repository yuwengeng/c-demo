#include "stdio.h"
#define N 40
#include "stdlib.h"
void main()
{
	int score[N],n,i;
	int p=0;
	printf("������������\n");
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
	printf("�������������%d��\n",p);









}