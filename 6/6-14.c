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
				printf("������%2d��   Ů����%2d��   С����%2d��\n",a,b,c);
			if(c==0)
				break;
		
		}
	
		b=0;
		if(a==30)
			break;
	}


}