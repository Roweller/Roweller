//12103990104路如龙
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 5
void M101()
{
int i,max=0;
int m[N]={2,6,5,8,4};
for(i=0;i<N;i++)
if(m[i]>max)
max=m[i];
printf("%d\n",max);
}
void M102()
{
int i,n,max;
int  a[N]={2,6,5,8,4};
max=0;
for(i=0;i<N;i++)
{
if(a[i]>max)
{
max=a[i];
n=i;
}
}
printf("%d",n);
}
void M103()
{
int i,min,max;
int a[N]={2,6,5,8,4};
min=max=0;
for(i=0;i<N;i++)
{
	if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("%d",max-min);
}
void M104()
{
int i;
int c[N];
int a[N]={2,6,5,8,4};
int b[N]={2,6,5,8,4};
for(i=0;i<N;i++)
{
	c[i]=a[i]+b[i];
	printf("%d  ",c[i]);
}
}
void M105()
{
int i,b;
int a[20]={1,3,5,9,54,64,54,5,45,4,54,54,5,4,5,45,17,19,8,1};
b=0;
for(i=0;i<20;i++)
{
	if(a[i]!=1)
if(a[i]==2||a[i]==3||a[i]==5||a[i]==7)
b++;
else if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0&&a[i]%7!=0)
b++;
}
printf("%d",b);
}
void M106()
{
int i,a,sum=0;
int b[20];
printf("请输入20个整数：");
for(i=0;i<20;i++)
{
scanf("%d",&a);
b[i]=a;
sum+=a;
}
printf("%.2f",double(sum)/20.0);
}
void M107()
{
int i,j,a[6][6];
for(i=0;i<6;i++)
{
a[i][i]=1;
a[i][0]=1;
}
for(i=2;i<6;i++)
for(j=1;j<i;j++)
a[i][j]=a[i-1][j-1]+a[i-1][j];
for(i=0;i<6;i++)
{
for(j=0;j<=i;j++)
printf("%d  ",a[i][j]);
printf("\n");
}
}
void M108()
{
	int i,j;
	int a[3][3]={{100,200,300},
			 {400,500,600},
			 {700,800,900}};
for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
printf("%d  ",a[i][j]);
printf("\n");
}
}
void M109()
{

	int A[2][3],B[2][3],C[2][3];
	int i,j,a,b;
	printf("输入6个数：");
	b=0;
	for(i=0;i<2;i++)
	{
		j=0;
		do
		{
			b++;
			scanf("%d",&a);
			if(b<=6)
			{
				A[i][j]=a;
				if(b==6)
				i=j=0;
			}
			else
				B[i][j]=a;
			if(b==12)
				goto out;
			j++;
		}while(j<3);
	}
out:;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			printf("%d  ",C[i][j]);
		}
}
void M110()
{
int i,y;
int a[3][3]={{1,3,5},
		{2,3,7},
		{5,9,7}};
y=0;
for(i=0;i<3;i++)
y+=a[i][i];
printf("%d",y);
}
void M201()
{

int i,j,max;
int a[15]={51,54,64,6,46,4,165,41,540,64,15,8,45,94,87};
for(i=0;i<14;i++)
for(j=0;j<14-i;j++)
{
if(a[j]<a[j+1])
{
	max=a[j+1];
	a[j+1]=a[j];
	a[j]=max;
}
for(i=0;i<14;i++)
printf("%d  ",a[i]);
}
}
void M202()
{
int a[20],b[20],m,min,z,i,j,x,y,q[20];
z=0;j=0;x=0;
for(i=0;i<20;i++)
{
scanf("%d",&m);
a[i]=m;
b[j]=m;
j++;
}
do
{
z++;
for(i=0;i<19;i++)
if(a[i]>=a[i+1])
{
min=a[i+1];
a[i+1]=a[i];
a[i]=min;
}
}while(z<=200);
for(i=0;i<20;i++)
{
printf("%d   ",a[i]);
for(j=0;j<20;j++)
if(a[i]==b[j])
{
	q[-1]=-4;
	q[x]=j+1;
	  for(y=0;y<x;y++)
	 if(q[x]==q[y])
	goto out;
	printf("%d\n",q[x]);
	break;
out:;
}
x++;	
}
}
void M203()
{
int i,m;
int a[8]={54,61,6,541,51,51,5,7};
for(i=0;i<4;i++)
{
m=a[i];
a[i]=a[7-i];
a[7-i]=a[i];
}
for(i=0;i<8;i++)
printf("%d  ",a[i]);
}

void M204()
{
int a,i,m;
scanf("%d",&a);
int z[7]={1,6,7,9,11,41,a};
for(i=5;i>=0;i--)
{
if(z[i]>=a)
z[i+1]=z[i];
else
{
z[i+1]=a;break;
}
}
for(i=0;i<7;i++)
printf("%d  ",z[i]);
}
void M205()
{
int a[5][3];
int sum,pj,i,j,m;
for(i=0;i<5;i++)
{
	printf("输入成绩：");
	sum=0;
for(j=0;j<3;j++)
{
	scanf("%d",&m);
	sum+=m;
	a[i][j]=m;
}
pj=m/3;
printf("总分--%d，平均数--%d\n",sum,pj);
}
}
void M206()
{
int a[5][5];
int m,n,i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
scanf("%d",&m);
a[i][j]=m;
}
printf("\n");
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
printf("%d ",a[i][j]);
printf("\n");
}
for(i=0;i<5;i++)
{
n=a[1][i];
a[1][i]=a[4][i];
a[4][i]=n;
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
printf("%d  ",a[i][j]);
printf("\n");
for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		if(i!=j)
			printf("%d ",a[i][j]);
	}
		printf("\n");
}
}
}
void M207()
{
int a[N][N];
int row,co1,max,min,c;
printf("输入25个数：");
for(row=0;row<N;row++)
for(co1=0;co1<N;co1++)
{
scanf("%d",&c);
a[row][co1]=c;
}
for(row=0;row<N;row++)
{
for(max=a[row][0],co1=1;co1<N;co1++)
if(a[row][co1]>max)
max=a[row][co1];
if(row==0)
min=max;
else if(min>max)
min=max;
}
printf("The min of max numbers is %d\n",min);
}
void M208()
{
int a[10],b[10],m;
int x,i,j,max,max_;
for(i=0;i<10;i++)
{
	scanf("%d",&m);
	a[i]=b[i]=m;
}
for(i=0;i<9;i++)
for(j=0;j<9-i;i++)
if(a[i]>a[i+1])
{
	x=a[i];
	a[i]=a[i+1];
	a[i+1]=x;
}
for(i=0;i<10;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<10;i++)
for(j=0;j<9;j++)
{
	for(m=1;m<j;m++)
	{
	if(a[j]>=a[j-m])
	{
	max=a[j];
	max_=j;
	}
	else
	{
	max=a[j-m];
	max_=j+1;
	}
	}
	printf("%d",max);
a[max_]=-max;
}

}
void main()
{
	int a,b;
printf("输入题号：101-110 201-208\n");
for(a=1;a<54;a++)
{
	scanf("%d",&b);
switch(b)
{
case 101:M101();break;
case 102:M102();break;
case 103:M103();break;
case 104:M104();break;
case 105:M105();break;
case 106:M106();break;
case 107:M107();break;
case 108:M108();break;
case 109:M109();break;
case 110:M110();break;
case 201:M201();break;
case 202:M202();break;
case 203:M203();break;
case 204:M204();break;
case 205:M205();break;
case 206:M206();break;
case 207:M207();break;
case 208:M208();break;

}
printf("\n");
}
}