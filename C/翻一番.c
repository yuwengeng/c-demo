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
	printf("������Ϊ12%%ʱ����%d��ɷ�һ��\n",n);
}