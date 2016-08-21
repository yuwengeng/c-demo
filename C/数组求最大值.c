#include"stdio.h"
#define size 10
int Max(int a[])
{
   int i,max=a[0];
   for(i=1;i<10;i++)
   {
     if(max<a[i])
		 max=a[i];
   }

   return max;

}
void main()
{
    int a[size],max,i;
	printf("Please input 10 number:\n");

    for(i=0;i<10;i++)
	{
	    scanf("%d",&a[i]);
	
	}
    printf("max=%d\n",Max(a));

}