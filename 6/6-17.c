#include<stdio.h>
main()
{
	int i,j,k,x;
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			k=50-i-j;
			x=10*i+5*j+k;
			if(x==100)
				printf("100元人民币可以兑换10元%d张,5元%d张,1元%d张\n",i,j,k);
			if(x>100)
				break;
		}
		if(i==10)
			break;
	}
}