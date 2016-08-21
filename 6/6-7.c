#include<stdio.h>
#include<math.h>
void main()
{

    double n,c;
	
	for(c=0.06;c<=0.12;c=c+0.02)
	{
       n=log10(2)/log10(1+c);
        printf("当c=%.0f时过%.2f年工业产值可实现翻一番\n",c*100,n);

	}
}
