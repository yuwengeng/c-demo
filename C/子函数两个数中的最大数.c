#include "stdio.h"
int Max(int a,int b);
void main()
{
	int a,b;
	printf("put two number! \n");
	scanf("%d %d",&a,&b);
	printf("%d",Max(a,b) );

}
int Max(int a,int b)
{
     int  max;
	 if(a<b)
	 {
		 max=b;
		 a=max;
		 b=a;
		 

	 
	 }
	 return max;

}
