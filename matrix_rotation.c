/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/matrix-rotation-algo/
*/
#include<stdio.h>
long int a[300][300];
void rotate(int row,int col,int x,int y)
{	if(row==0||col==0)
	return;

	int k,i,j,temp,prev;
	i=x; j=y;
	prev=a[i][j];
	for(k=0;k<row-1;k++)
	{
		temp=a[i+1][j];
		a[i+1][j]=prev;
		prev=temp;
		i++;
	}
	i=x+row-1; j=y;
	for(k=0;k<col-1;k++)
	{
		temp=a[i][j+1];
		a[i][j+1]=prev;
		prev=temp;
		j++;
	}
	i=x+row-1; j=y+col-1;
	for(k=0;k<row-1;k++)
	{
		temp=a[i-1][j];
		a[i-1][j]=prev;
		prev=temp;
		i--;
	}
	i=x; j=y+col-1;
	for(k=0;k<col-1;k++)
	{
		temp=a[i][j-1];
		a[i][j-1]=prev;
		prev=temp;
		j--;
	}
}
int main()
{	//freopen("input.in","r",stdin);
// freopen("output.in","w",stdout);

	long int r,m,n,tm,tn; int i,j;
	scanf("%ld %ld %ld",&m,&n,&r);
	tm=m; tn=n;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%ld",&a[i][j]);
	}
	j=0;
	while(1)
	{ int temp=2*(m+n)-4;
		
		if(m==0||n==0)
			break;

		for(i=0;i<r%temp;i++)
			{	
				rotate(m,n,j,j);
			}
		j++;
		m-=2; n-=2;
	}

	for(i=0;i<tm;i++)
	{
		for(j=0;j<tn;j++)
			printf("%ld ",a[i][j]);

		printf("\n");
	}
	


return 0;
	
}