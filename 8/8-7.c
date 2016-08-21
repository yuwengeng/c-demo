#include<stdio.h>
#define n 10
int Finemax(int s[])
{
	int i,maxpos;
	int max=s[0];
	for(i=1;i<10;i++)
	{
		if(max<s[i])
			
			maxpos=i;
		
	}
	return maxpos;
}



int Finemin(int s[])
{
	int i,minpos;
	int min=s[0];
	for(i=1;i<10;i++)
	{
		if(min>s[i])
			
			minpos=i;
	}
	return minpos;
}
void main()
{
	int s[n],t;
	int i,maxpos,minpos;
	printf("请输入十个数:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	maxpos=Finemax(s);
	minpos=Finemin(s);
	t=s[minpos];
	s[minpos]=s[maxpos];
	s[maxpos]=t;
	for(i=0;i<n;i++)
	{
		printf("%d",s[i]);
	    printf("\n");

	}
	
}