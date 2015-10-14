/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/the-grid-search
*/

#include<stdio.h>
int a[1100][1100],b[1100][1100];
int compute(int x,int y,int r,int c)
{
	int i,j,tx=x,ty=y; 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(b[i][j]==a[tx][ty])
				{ty++;continue;}
			else
			{
				return 0; 
			}
			

		}
		tx++;
		ty=y;
	}
	return 1;
}
int main()
{	//freopen("input.in","r",stdin);
	int t,r1,c1,r2,c2,i,j; char temp[1000];
	scanf("%d",&t);
	while(t--)
	{	int ans=0;
		scanf("%d %d\n",&r1,&c1);
		for(i=0;i<r1;i++)
		{	scanf("%s",temp);

			for(j=0;j<c1;j++)
				{
					a[i][j]=temp[j]-'0';
				}
		}
		scanf("%d %d\n",&r2,&c2);
		for(i=0;i<r2;i++)
		{scanf("%s",temp);
			for(j=0;j<c2;j++)
				{
					b[i][j]=temp[j]-'0';
				}
		}

		for(i=0;i<=r1-r2;i++)
		{
			for(j=0;j<=c1-c2;j++)
			{
				ans=compute(i,j,r2,c2);
				
				if(ans==1)
					{break;}
			}
			if(ans)
				break;
		}

		if(ans==1)
			printf("YES\n");
		else
			printf("NO\n");
			

	}

	
}