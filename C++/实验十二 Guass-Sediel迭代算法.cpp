#include<stdio.h>
#include<math.h>
#define N 3 //方程的阶数
#define MaxK 100 //最大迭代次数
#define EPS 0.5e-4 //精度
static double aa[N][N]={{10,-1,-2},{-1,10,-2},{-1,-1,5}};
static double bb[N]={7.2,8.3,4.2};
static double y[N+1];
static double x[N+1];

double p(double a[][N+1],double x[N+1],int i)
{double t=0.0;
 int j;
 for(j=1;j<=(i-1);j++)
   t=a[i][j]*x[j]+t;
 return t;
}

double h(double a[][N+1],double x[N+1],int i)
{double t=0.0;
 int j;
 for(j=(i+1);j<=N;j++)
   t=a[i][j]*x[j]+t;
 return t;
}

void chg(double x[N+1],double y[N+1])
{int i;
 for(i=1;i<=N;i++)
   y[i]=x[i];
}

//参数说明：a传入系数矩阵,b为方程组右边常数列,x传入迭代初值并返回解向量 返回值：1正常结束；-1存在元素为0；-2为迭代次数越界
int GaussSeidel(double a[][N+1],double b[N+1],double x[N+1])
{int k=0;
 int j,m1=-2,m2=-1,m0=1,z=0,i;
 double t=0.0;
 chg(x,y);
 for(k=1;;k++)
	{for(i=1;i<=N;i++)
		{if(k>MaxK) return m1;
		 if(a[i][i]==0) return m2;
		 x[i]=(b[i]-p(a,x,i)-h(a,x,i))/a[i][i];
		 if(i==N)
			{printf("\nk=%d: x[%d]=%f  x[%d]=%f  x[%d]=%f\n",k,i-2,x[i-2],i-1,x[i-1],i,x[i]);
			 for(j=1;j<=N;j++)
				t=fabs(x[j]-y[j])+t;
			 if(t<EPS) z=1;
			 t=0.0;
			 chg(x,y);
			}
		 if(z==1) break;
		}
		if(z==1) break;
	}
 return m0;
}

void main()
{int i,j;
 double a[N+1][N+1],b[N+1];
 for(i=1;i<=N;i++)
	{for(j=1;j<=N;j++)
		a[i][j]=aa[i-1][j-1];
	 b[i]=bb[i-1];
	 x[i]=0;
	 y[i]=0;
	}
 if(GaussSeidel(a,b,x)==1)
	{printf("\nthe root is ");
	 for(i=1;i<=N;i++)
		printf("x[%d]=%f  ",i,x[i]);
	 printf("\n");
	}
 else
	printf("the G-S method failed\n");
 getchar();
}
