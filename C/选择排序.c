#include<stdio.h>
#define N  100
main()
{
	int a[N],i,j,count,t;
     printf("Please input datas:");
		scanf("%d",&count);
		printf("Please input %d datas:",count);
		for(i=0;i<count;i++)
		{
      
		scanf("%d",&a[i]);
		}
	
	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				
			}
    }
	
for(j=0;j<count;j++)
printf("%4d",a[j]);
}
