#include<stdio.h>
main()
{
	int a,b;
	for(a=1;a<=97;a++)
		for(b=1;b<=97;b++)
			if(a+b==98&&2*a+4*b==386)
				printf("����%dֻ   ����%dֻ\n",a,b);
}
