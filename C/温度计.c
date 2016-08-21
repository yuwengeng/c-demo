#include <stdio.h>
void main()
{
	int F;
	float C;
	printf("   F      C\n");
	for(F=-40;F<=110;F=F+10)
	{
		C=((float)5/9)*(F-32);
		
		printf("%5d%7.1f\n",F,C);
		
	}
}