#include<stdio.h>
#define N 40
int ReadScore(int score[],long nmu[]);
void DataSort(int score[],long num[],int n);
void PrintScore(int score[],long num[],int n);
int main()
{
	int score[N],n;
	long num[N];
	n=ReadScore(score,num);
	printf("Total students are %d\n",n);
	DataScore(score,num,n);
	printf("Sorted scores:\n");
	PrintScore(score,num,n);
	return 0;
}


