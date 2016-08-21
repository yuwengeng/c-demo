#include "stdio.h"
#define N 40
float Ave(int score[], int m);
int Readscore(int score[]);
int main()
{
	int score[N];
	int m;
	m=Readscore(score);
	printf("amount about people is %d\n",m);
	printf("the aver is %f\n",Ave(score,m));
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
float Ave(int score[],int m)
{
	int i;
	float sum=0.0;
	for(i=0;i<m;i++)
	{
		sum+=score[i];

	 
	}
	return sum/m;

}
