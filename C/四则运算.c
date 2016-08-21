#include <stdio.h>
void main()
{
    float a,b;
	char op;
	printf("请输入形如a+b的式子：\n");
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
			printf("除数不能为零！\n");
	}
}
