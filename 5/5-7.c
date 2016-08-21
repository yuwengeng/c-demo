#include <stdio.h>
void main()
{
	char a;
	printf("Press a key and then press Enter:");
	scanf("%c",&a);
   	if(64<a&&a<91)
	{
		//a=getchar();
		a=a+32;
	    printf("%c,%d\n",a,a);
	}
	else if (96<a&&a<123)
	{
	    //a=getchar();
		a=a-32;
		printf("%c,%d\n",a,a);
		
	}
	else
	{
		
		printf("%c\n",a);
	}
}

