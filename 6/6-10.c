#include<stdio.h>
main()
{
	int i=100,a,b,c;

		do{
			a=i/100;
			b=(i-a*100)/10;
			c=i%10;
			
			if(i==a*a*a+b*b*b+c*c*c)
            printf("ˮ�ɻ���Ϊ%d\n",i);
			
			i++;
		}while(i<=999);

	
	


}