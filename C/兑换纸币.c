#include "stdio.h"
void main()
{
	int a,b,c;
	
	for(a=0;a<6;a++)
		for(b=0;b<11;b++)
			for(c=0;c<51;c++)
			if(10*a+b*5+c==50) //&& (a+b+c==25))
				printf("%d% d   %    d\n",a,b,c);


}