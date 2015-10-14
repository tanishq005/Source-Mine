/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/crush/
*/
#include<stdio.h>
long long int aa[10000001],temp[10000001];
long long int max(long long int a , long long int b)
{
	long long int max=a>b?a:b;
	return max;
}
int main()
{	//freopen("input.in","r",stdin);
	long int m,n,i,a,b,value;
	scanf("%ld %ld",&n,&m);
	while(m--)
	{
		scanf("%ld %ld %ld",&a,&b,&value);
		temp[a]+=value;
		temp[b+1]-=value;
	}
	long long int maxi=temp[1];
	aa[1]=maxi;
	for(i=2;i<=n;i++)
	{	aa[i]=aa[i-1]+temp[i];
		maxi=max(maxi,aa[i]);
	}

	
	printf("%lld\n",maxi);

	

}