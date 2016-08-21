#include "stdio.h"
#define N 40
#include "stdlib.h"
int Findamx(int score[],int n,int *pmaxscore,int *q);
void main()
{
	int score[N],n,i;
    int maxscore,q;
	printf("«Î ‰»Î»À ˝£°\n");
	scanf("%d",&n);
	printf("put all score!\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	Findamx(score,n,&maxscore,&q);
	printf("max=%d",maxscore); 
	printf("the mount of fail is %d",q);


	
}
int Findamx(int score[],int n,int *pmaxscore,int *q)
{
	int i;
	*q=0;
  *pmaxscore=score[0];
  for(i=0;i<n;i++)
  {
	  if(score[i]> *pmaxscore)
	  {
		  *pmaxscore=score[i];
		  *q++;
	      
	  }

	
  }
   

}