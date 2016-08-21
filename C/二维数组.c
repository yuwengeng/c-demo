#include "stdio.h"


void Line_sum(int  a[][3],int m,int n,int s[])
{int i,j;
for(i=0;i<m;i++)
{s[i]=0;
   for(j=0;j<n;j++)
	   s[i]+=a[i][j];
}


}

}
void main()
{
int  a[3][3],line[3],col[3],i,j;
int  m=0,n=0;
int  flag=1;
puts("请输入3*3的矩阵");
for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);

 /*for(i=0;i<3;i++)
   for(j=0;j<3;j++)
      if(a[i][j]!=a[j][i])
	  {flag=0;break;}
 if(!flag)
	  puts("不是对称矩阵");
  else  puts("是对称矩阵");*/

/*for(i=0;i<2;i++)
{for(j=0;j<3;j++)
     printf("%4d",a[i][j]);
putchar('\n');
}*/
Line_sum(a,3,3,line);
 //  for(i=0;i<3;i++)
  // {Line_sum(a[i],3,&line[i]);
    //}
for(j=0;j<3;j++)
{col[j]=0;
   for(i=0;i<3;i++)
	   col[j]+=a[i][j];
}


   for(i=0;i<3;i++)
	  m+=a[i][i];
   printf(" 主对角线数据之和%d\n",m);
/*
 for(i=0;i<3;i++)
	  n+=a[i][2-i];
   printf(" 次对角线数据之和%d\n",n);


for(j=0;j<3;j++)
{
   for(i=0;i<3;i++)
	  if(i==j) m+=a[j][i];
}
printf(" 主对角线数据之和%d\n",m);
for(j=0;j<3;j++)
{
   for(i=0;i<3;i++)
	  if((i+j)==(3-1)) 
		    n+=a[j][i];
}
printf(" 次对角线数据之和%d\n",n);


for(j=0;j<3;j++)
  printf("%4d",line[j]);*/

   for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
      printf("%4d",a[i][j]);
    printf("%4d",line[i]); 
	putchar('\n');
   }
   for(i=0;i<3;i++)
        printf("%4d",col[i]);
    printf("%4d",m);


putchar('\n');
}