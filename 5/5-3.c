#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,area;
	printf("请输入三角形的三个边长:");
	scanf("%f%f%f",&a,&b,&c);
	d=(a+b+c)/2;
	area=(float)sqrt(d*(d-a)*(d-b)*(d-c));
    if(a+b>c)
		printf("area=%f\n",area);
	else
		printf("error!Please input again\n");
	
}