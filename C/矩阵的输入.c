#include<stdio.h>
main()
{
	int i,j;
	int matrix[2][2];
	printf("Please input datas:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix[i][j]);

		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)

	{
		printf("%4d",matrix[i][j]);
		
	}putchar('\n');
	
	}
	

}
