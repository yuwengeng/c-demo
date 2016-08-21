#include<stdio.h>
void main()
{
	int i,j,k,x;
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
            k=100-i-j;
			x=i*5+j*3+k;
			if(x==100)
				printf("¹«¼¦%d£¬Ä¸¼¦%d£¬Ð¡¼¦%d\n",i,j,k);
			if(x>=0)
				break;
		}
	    
		if(i==20)
			break;

	}

}