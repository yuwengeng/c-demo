#include <stdio.h>
#include <math.h>
main()
{
float a,b,c,d,x1,x2;
printf("����������һԪ���η��̸����ϵ�������ν��ͣ�:\n");
scanf("%f%f%f",&a,&b,&c);
if((b*b-4*a*c)>0)
{
d=sqrt(b*b-4*a*c);
x1=(-b-d)/(2*a);
x2=(-b+d)/(2*a);
printf("x1=%f\nx2=%f\n",x1,x2);
}
else
printf("�÷���û��ʵ��");
}