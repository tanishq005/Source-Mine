/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/sam-and-substrings/
*/
#include<stdio.h>
#include<string.h>
#define M 1000000007
long long int a[300001],dp[300001]; char n[10000];
int main()
{	//freopen("input.in","r",stdin);
	long long int i,count=0,len,x,y;
	
	scanf("%s",n);
	len=strlen(n);
	for(i=0;i<len;i++)
	{
		a[i]=n[i]-'0';
	}
	dp[0]=a[0];
	for(i=1;i<len;i++)
	{      x=((i+1)*a[i])%M;
            y=(dp[i-1]*10)%M;
		dp[i]=(x%M+y%M)%M;
	}
	for(i=0;i<len;i++)
	{
		count+=(dp[i]%M);
	}
	printf("%lld",count%M);
	
}