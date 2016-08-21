#include "math.h"
#include "stdio.h"
#include "conio.h"
#define N 4
#define MaxK   1000
#define EPS   0.5e-5
static double aa[N][N]={{-4,1,1,1},{1,-4,1,1},{1,1,-4,1},{1,1,1,-4}};
static double bb[N]={1,1,1,1};
void main()
{	int i,j;
    double x[N+1];   
	double a[N+1][N+1],b[N+1];
	int Sor(double a[][N+1],double b[],double w,double x[]);
	for(i=1;i<=N;i++)
	{	 for(j=1;j<=N;j++)
			 a[i][j]=aa[i-1][j-1];
		 b[i]=bb[i-1]; x[i]=0;
	 }
	 if(Sor(a,b,1.3,x)==1)
	 {	 printf("the roots is:");
		 for(i=1;i<=N;i++)	 printf("  x[%d]=%f ",i,x[i]);printf("\n");
	 }
	 else printf("\nthe G-S method failed!\n");  
	 getch();
}
int Sor(double a[][N+1],double b[],double w,double x[]){…}
//参数说明：a传入系数矩阵（有效元素为 ），b为方程组右边常数列，x传入迭代初值并返回解向量（有效值为 ）；返回值：1正常结束；-1存在元素 为0；-2为迭代次数越界；
