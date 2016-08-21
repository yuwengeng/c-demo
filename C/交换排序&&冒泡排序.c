#include<stdio.h>
#define N 100
main()
{
	 int a[N],i,j,n,t;
	 printf("Please datas");
	 scanf("%d",&n);
	 printf("Please input datas:");
	 for(i=0;i<n;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-i-2;j++)
			if(a[j]<a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
				
			}
	}
for(j=0;j<n;j++)
printf("%4d",a[j]);

}