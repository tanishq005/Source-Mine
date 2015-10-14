/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/flipping-bits/
*/
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
string d2b(long  int a)
{
	string s;
	int temp; char add;
	while(a>0)
	{	temp=a%2;
		add=temp+'0';
		s=add+s;
		a/=2;
	}

	return s;
}
unsigned int b2d(string s)
{	unsigned int ans=0; int i;
	for(i=31;i>=0;i--)
	{	
		if(s[i]=='1')
		{	
			ans+=(pow(2,31-i));
		}

	}
	return ans;
}
int main()
{	//freopen("input.in","r",stdin);
	string b; int i,len;
	long int a,t;
	cin>>t;
	while(t--)
	{
	cin>>a;
	b=d2b(a);
	len=b.length();
	if(len<32)
	{
		for(i=1;i<=32-len;i++)
			b='0'+b;
	}
	for(i=0;i<32;i++)
	{
		if(b[i]=='0')
			b[i]='1';
		else
			b[i]='0';

	}
	unsigned int ans=b2d(b);
	cout<<ans<<endl;
}

	
}