#include <stdio.h>
void main()
{
	double H,faHeight,moHeight;
	char sex,sports,diet;
	printf("Please Input sex,sports,diet,faHeight,moHeight");
	scanf("%c %c %c %f%f",&sex,&sports,&diet,&faHeight,&moHeight);
	if(sex='F',sports='Y',diet='Y');
	{
		H=((faHeight*0.923+moHeight)/2)*1.035;
		printf("H=%f",H);
	}
	 if(sex='F',sports='N',diet='Y');
	{
		H=((faHeight*0.923+moHeight)/2)*1.015;
		printf("H=%f",H);
	}
	 if(sex='F',sports='Y',diet='N');
	{
		H=((faHeight*0.923+moHeight)/2)*1.02;
		printf("H=%f",H);
	}
	 if(sex='F',sports='N',diet='N');
	{
		H=((faHeight*0.923+moHeight)/2);
		printf("H=%f",H);
	}
	 if(sex='M',sports='N',diet='N');
	{
		H=(faHeight+moHeight)*0.54;
		printf("H=%f",H);
	}
	 if(sex='M',sports='Y',diet='N');
	{
		H=((faHeight+moHeight)*0.54)*1.02;
		printf("H=%f",H);
	}
	 if(sex='M',sports='Y',diet='Y');
	{
		H=((faHeight+moHeight)*0.54)*1.035;
		printf("H=%f",H);
	}
     if(sex='M',sports='N',diet='Y') 
	{
		H=((faHeight+moHeight)*0.54)*1.015;
        printf("H=%f",H);
	}
	
}