#include "stdio.h"
#include "math.h"
void main()
{
	char op;
	int num1,num2;
	int result;
	printf("�������������ʽa+b=\n");
	scanf("%d%c%d=",&num1,&op,&num2);
	if(op=='+')
		result=num1+num2;
		if(op=='-')
			result=num1-num2;
			if(op=='*')
			   result=num1*num2;
			   if(op=='/')
			      result=num1/num2;
				  printf("%d%c%d=%d\n",num1,op,num2,result);
}














