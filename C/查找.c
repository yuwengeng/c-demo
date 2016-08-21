#include "stdio.h"
#define N 40
int Search(long num[],long x,int m);
int Readscore(int score[],long num[]);
int main()
{
	int m,score[N],p;
	long  x,num[N];
	m=Readscore(score,num);
	printf("amount about people is %d\n",m);
	printf("put he tag of x!");
	scanf("%ld",&x);
    p=Search(num,x,m);
    if(p!=-1)
	{
		printf("what you want to find is %d\n",score[p]);
		
	}
	else
	{
		printf("no find !\n");
		
		
	}
	
	return 0;
	
	
}
int Readscore(int score[],long num[])
{
	
	int i=-1;
	
	do{
		i++;
		printf("put the score and num\n");
		scanf("%ld%d",&num[i],&score[i]);
		
	}while(score[i]>=0);
	return i;
	
	
}
int  Search(long num[],long x,int m)
{
/*	int i;
for(i=0;i<m;i++)
{
if(num[i]==x)  
return (i);

  }
  return -1;
  
	
}*/
	int high,low,mid;
	low=0;
	high=m-1;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(x>num[mid])
		{
			low=mid+1;
		}
		else
			if(x<num[mid])
			{
				high=mid-1;
				
			}
			else
			{
				return mid;	
			}
 		
	}
	return -1;
}