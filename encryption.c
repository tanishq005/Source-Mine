/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/encryption/
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{	//freopen("input.in","r",stdin);
	int row,col,i,j,len,k; 
	char a[100];
	scanf("%s",a);
	len=strlen(a);
	row=floor(sqrt(len));
	col=ceil(sqrt(len));
	char ans[row+1][col+1]; k=0;
	if(row*col<len)
	{
		if(len-row*col<=row)
			row++;
		else
			col++;
	}
		for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			ans[i][j]='.';
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			{	
				if(k>len-1)
				break;

				ans[i][j]=a[k]; k++;
			}
	}
	
	k=0;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{	
			if(ans[j][i]=='.')
			continue; 
			printf("%c",ans[j][i]);
		

		}
		 printf(" ");
	}

return 0;
	
}