#include<stdio.h>
#include<math.h>
void main()
{

    double n,c;
	
	for(c=0.06;c<=0.12;c=c+0.02)
	{
       n=log10(2)/log10(1+c);
        printf("��c=%.0fʱ��%.2f�깤ҵ��ֵ��ʵ�ַ�һ��\n",c*100,n);

	}
}
