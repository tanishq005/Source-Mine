/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/flowers/
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
	int count,i,n,k,factor=0;
	long long int a[1000],sum=0;
	scanf("%d %d",&n,&k);
	count=0;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	sort(a,a+n);
	for(i=n-1;i>=0;i--)
	{
		if(count==k)
			{factor++; count=0;}
 		sum=sum+(factor+1)*a[i];
 		count++;

	}
	printf("%lld\n",sum);

}