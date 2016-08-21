#include<stdio.h>
void main()
{
	int i,a,b,c;
    for(a=0;;a++)
	{
		for(b=0;;b++)
		{
			c=30-a-b;
			i=a*3+b*2+c;
			if(i==50)
				printf("男人有%2d人   女人有%2d人   小孩有%2d人\n",a,b,c);
			if(c==0)
				break;
		
		}
	
		b=0;
		if(a==30)
			break;
	}


}