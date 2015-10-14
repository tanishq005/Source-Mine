/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/connected-cell-in-a-grid
*/

#include<stdio.h>
int a[20][20],v[20][20],m,n;
int check(int i,int j)
{
	if((i>0&&i<=m)&&(j>0&&j<=n)&&(a[i][j]==1&&v[i][j]==0))
		return 1;
	else
		return 0;

}
int count=0;
int dfs(int i,int j)
{	int k; 
	v[i][j]=1;
	int ii[8]={-1,0,1,-1,1,-1,0,1};
	int jj[8]={1,1,1,0,0,-1,-1,-1};

	for(k=0;k<8;k++)
	{
		if(check(i+ii[k],j+jj[k]))
		{
			count++;
			dfs(i+ii[k],j+jj[k]);
		}
	}
	return count;

}
int compute()
{
	int i,j,ans,max=0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{	count=0;
			if(a[i][j]==1)
				ans=dfs(i,j);

			if(ans>max)
				max=ans;

		}
	}
	return max;
}
int main()
{

	//freopen("input.in","r",stdin); 
	scanf("%d %d",&m,&n);
	int i,j;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);

	printf("%d",compute()+1);	

}