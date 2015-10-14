/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<vector>
using namespace std;
int n,m,a[1100],b[1100],dp[1100][1100]; vector<int>temp;
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main() { //freopen("input.in","r",stdin);
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=m;i++)
        scanf("%d",&b[i]);
    
    for(i=0;i<=n;i++)
        dp[i][0]=0; 
    for(i=0;i<=m;i++)
        dp[0][i]=0;
    
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=m;j++)
            {
                if(a[i]==b[j])
                    dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
            }
            }
    
   i=n;j=m;
  
   
   while(1)
   {
    if(max(dp[i-1][j],dp[i][j-1])==dp[i][j])
      {   if(dp[i-1][j]>=dp[i][j-1])
        i--;
        else
          j--;
    }
    else
     {  temp.push_back(a[i]);
        i--; j--;
        }
        if(i==0||j==0)
        break;
   }
            
            for(i=temp.size()-1;i>=0;i--)
                printf("%d ",temp[i]);
     
    return 0;
   
}