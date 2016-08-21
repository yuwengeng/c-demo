#include "stdio.h"
#define N 40
int Sort(int score[], int m);
int Readscore(int score[]);
int main()
{
	int score[N];
	int m,i;
	m=Readscore(score);
	printf("amount about people is %d\n",m);
    Sort(score, m);
	for(i=0;i<m;i++)
	{
		printf("%d\n",score[i]);
	
	}
	return 0;
 

}
int Readscore(int score[])
{

	int i=-1;
	printf("put the score\n");
	do{
		i++;
		
		scanf("%d",&score[i]);
	
	}while(score[i]>=0);
	return i;


}
int  Sort(int score[],int m)
{
	/*int i,j;
    int temp;
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(score[i]>score[j])
			{
				temp=score[i];
				score[i]=score[j];
				score[j]=temp;
				
			}
		}
	}*/
	int i,j;
    int temp;
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<=m-i-2;j++)
		{
			if(score[j]<score[j+1])
			{
				temp=score[j+1];
				score[j+1]=score[j];
				score[j]=temp;
				
			}
		}
	}
	
 }
