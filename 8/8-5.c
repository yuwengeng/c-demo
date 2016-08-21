#include<stdio.h>
#define N 40
int Average(int score[],int n);
int ReadScore(int score[]);
int main()
{
	int score[N],aver,n,x;
	n=ReadScore(score);
	printf("Total students are %d\n",n);
	aver=Average(score,n);
    printf("平均分为%d\n",aver);
	x=F(score,n);
    printf("成绩高于平均分的学生人数有%d人\n",x);
	return 0;
}
int Average (int score[],int n)
{
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=score[i];
	}
    j=sum/n;
	return j;
}
int ReadScore(int score[])
{
	int i=-1;
	printf("Input score:");
	do{
		i++;
		
		scanf("%d",&score[i]);


	}while(score[i]>=0);
	return i;
}
int F(int score[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(score[i]>Average(score,n))
			count++;

	}
	return count;
}