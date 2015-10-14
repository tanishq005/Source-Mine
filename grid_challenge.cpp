/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/grid-challenge/
*/
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{	//freopen("input.in","r",stdin);
	int t,n,i,j;
	char a[110][110];
	scanf("%d",&t);
	while(t--)
	{	int flag=0;
		scanf("%d\n",&n);

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				scanf("%c",&a[i][j]);
			scanf("\n");
		}

		for(i=0;i<n;i++)
		{
			sort(a[i],a[i]+n);
		}


		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{ 
				if(a[j][i]>a[j+1][i])
					flag=1;
			}

			if(flag)
				break;
		}

		if (flag)
			printf("NO\n");
		else
			printf("YES\n");



	}
	return 0;
}