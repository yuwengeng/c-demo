#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	double b;
	
	
	for(n=1;;n++)
	{
	
		b=100*(float)pow(1.12,n);
		if(b>=200)
			break;
		
	}
	printf("增长率为12%%时，需%d年可翻一番\n",n);
}