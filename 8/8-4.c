#include<stdio.h>
#define N 40
void F(int score[],int n);
int G(int score[]);
int main()
{
	int score[N],n,x;
	printf("Please input n:");
	scanf("%d",&n);
	F(score,n);
	x=G(score,n);
	printf("有%d个学生不及格\n",x);
	return 0;

}
void F(int score[],int n)
{
	int i;
	printf("Please input score:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
}

int G(int score[],int n)
{
	int count=0,i;
    for(i=0;i<n;i++)
	{
		if(score[i]<60)
			count++;

	}
	return count;
}