/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/board-cutting/
*/
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
#define M 1000000007

struct board
{
	long int val;
	int hor;
};
bool compare (board a , board b)
{
	return a.val>b.val;
}
struct board a[2000001];
int main()
{	//freopen("input.in","r",stdin);

	int t;
	long long int m,n,i,j,h,v,ans;
	scanf("%d",&t);
	while(t--)
	{ ans=0;
	scanf("%lld %lld",&m,&n);
	
	j=0;
	for(i=0;i<m-1;i++)
	{
		scanf("%lld",&a[j].val);
		a[j].hor=1;
		j++;
	}
		for(i=0;i<n-1;i++)
	{
		scanf("%lld",&a[j].val);
		a[j].hor=0;
		j++;
	}

	sort(a,a+j,compare);
	h=0; v=0;
	for(i=0;i<j;i++)
	{
		if(a[i].hor!=1)
		{	
			ans=(ans+a[i].val*(h+1))%M;
			v++;

		}
		else
			{ans=(ans+a[i].val*(v+1))%M;
			h++;}
	}

	printf("%lld\n",ans);
	}
}