#include<stdio.h>
#include<math.h>
#include<conio.h>
#define N 3
static double aa[N][N]={{1,2,-1},{1,-1,5},{4,1,-2}};
static double bb[N+1]={3,0,2};

//用于显示选主元及消元运算中间增广矩阵结果，由guassl()负责调用
void disp(double a[][N+1],double b[])
{int i,j;
	for(i=1;i<=N;i++)
		for(j=1;j<=N;j++)
		{printf(" %f  ",a[i][j]);
			if(j==N)
			{printf(" %f  ",b[i]); printf("\n");}
		}
}

double h(int n,double a[][N+1],double x[])
{double t;
	int k,i;
	t=0.0;
	k=n;
	for(i=n;i<N;i++)
		t=a[k][i+1]*x[i+1]+t;
	return t;
}

//参数说明：a传入增广矩阵，x负责传入迭代初值并返回解向量;返回值；系数矩阵行列式值det A;
double gauss(double a[][N+1],double b[],double x[])
{double c[N],d,m,n,max,t=1.0;
	int i,j,k,p;
	printf("消元前矩阵:\n");
	disp(a,b);
	for(p=1;p<N;p++)
	{max=fabs(a[p][p]);
		k=p;
		if(p<=(N-1))
		{j=p;
			for(i=(p+1);i<=N;i++)
			{if(fabs(a[i][j])>max)
				{max=fabs(a[i][j]);k=i;}
			}
			if(k!=p)
			{printf("交换%d行和%d行\n",p,k);
				for(i=0;i<N;i++)
				{c[i]=a[p][i+1];
					a[p][i+1]=a[k][i+1];
					a[k][i+1]=c[i];
				}
				d=b[p];
				b[p]=b[k];
				b[k]=d;
				disp(a,b);
			}
			printf("第%d次消元\n",p);
			m=a[p+1][p]/a[p][p];
			if(p==1)
				n=a[p+2][p]/a[p][p];
			for(i=p+1;i<=N;i++)
				for(j=p;j<=N;j++)
				{if(i<=(N-1))
					{a[i][j]=a[i][j]-m*a[p][j];
						if(j==N)
							b[i]=b[i]-m*b[p];
					}
					if(i==N)
					{if(p<(N-1))
						{a[i][j]=a[i][j]-n*a[p][j];
							if(j==N)
								b[i]=b[i]-n*b[p];
						}
						if(p==(N-1))
						{a[i][j]=a[i][j]-m*a[p][j];
							if(j==N)
								b[i]=b[i]-m*b[p];
						}
					}
				}
			disp(a,b);
		}
	}
	for(i=N;i>=1;i--)
		x[i]=(b[i]-h(i,a,x))/a[i][i];
	for(i=1;i<=N;i++)
		t=a[i][i]*t;
	return t;
}

void main()
{int i,j;
	double a[N+1][N+1],b[N+1],x[N+1],det;
	for(i=0;i<=N;i++)
	{x[i]=0.0; b[i]=0.0;}
	for(i=0;i<=N;i++)
		for(j=0;j<=N;j++)
			a[i][j]=0.0;
	for(i=1;i<=N;i++)
	{for(j=1;j<=N;j++)
			a[i][j]=aa[i-1][j-1];
		b[i]=bb[i-1];
	}
	det=gauss(a,b,x);
	if(det!=0)
	{printf("方程组的解: ");
		for(i=1;i<=N;i++)
			printf("x[%d]=%f ",i,x[i]);
		printf("\n系数矩阵的行列式为:%f\n",det);
		printf("\n");
	}
	else
		printf("\n\n系数矩阵奇异阵，高斯方法失败\n");
	getchar();
}

	