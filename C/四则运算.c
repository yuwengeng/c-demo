#include <stdio.h>
void main()
{
    float a,b;
	char op;
	printf("����������a+b��ʽ�ӣ�\n");
	scanf("%f%c%f",&a,&op,&b);
	if (op=='+')
	{a=a+b;
	printf("%.2f\n",a);
	}
    if (op=='-')
	{a=a-b;
	printf("%.2f\n",a);
	}
   if (op=='*')
	{a=a*b;
	printf("%.2f\n",a);
	}
   if (op=='/')
	{
		if(b!=0) 
		{
			a=a/b;
	        printf("%.2f\n",a);
		}
	    else
			printf("��������Ϊ�㣡\n");
	}
}
