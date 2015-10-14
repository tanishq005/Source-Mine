/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/cipher/
*/
#include<stdio.h>
#include<string.h>
char code[10000001],a[10000001];
int main()
{
	//freopen("input.in","r",stdin);

	long int n,k,i,c;
	scanf("%ld %ld\n",&n,&k);

	scanf("%s",code);
	a[0]=code[0];
	for(i=1;i<k;i++)
	{
		if(code[i-1]==code[i])
			a[i]='0';
		else
			a[i]='1';
	}	
    
    

	for(i=1;i<k;i++)
	{
		if(a[i]=='1')
			c++;

	}

	if(c%2==0)
		{ 
			if(code[k]=='1')
			a[k]='1';
			else
			a[k]='0';
		}	
	else
		{if(code[k]=='1')
			a[k]='0';
			else
			a[k]='1';}

	for(i=k+1;i<n;i++)
	{
		if(a[i-k]=='1')
			c--;
		if(a[i-1]=='1')
			c++;
		if(c%2==0)
		{ 
			if(code[i]=='1')
			a[i]='1';
			else
			a[i]='0';
		}	
		else
		{if(code[i]=='1')
			a[i]='0';
			else
			a[i]='1';}

	}

	for(i=0;i<n;i++)
        printf("%c",a[i]);
    
    return 0;



}