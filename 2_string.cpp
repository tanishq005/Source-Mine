/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/two-strings/
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main() {
    int arr[27],i,j,flag;
    char a[100001],b[100001];
    int t;
    scanf("%d\n",&t);
    while(t--)
        { flag=0;
        scanf("%s",a);
        scanf("%s",b);
    
    for(i=0;i<27;i++) arr[i]=-1;
    for(i=0;i<strlen(a);i++)
        if(arr[a[i]-97]==-1)
        arr[a[i]-97]=1;
    
         for(i=0;i<strlen(b);i++)
        if(arr[b[i]-97]==1)
        arr[b[i]-97]--;
    
   
    for(i=0;i<27;i++)
        if(arr[i]==0)
        {
        flag=1;
        break;
		 }
     if(flag)
         printf("YES\n");
        else
            printf("NO\n");
    }
    
   
    return 0;
}