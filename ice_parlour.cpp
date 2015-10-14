/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/icecream-parlor/
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct tempi {
    int val;
    int index;
};
bool compare(struct tempi a , struct tempi b)
{
    return a.val<b.val;
}
struct tempi a[100001];
int main() 
{ //freopen("input.in","r",stdin);
   int t,i,n,m,j;
    scanf("%d",&t);
    while(t--){ bool flag=0;
        
        scanf("%d %d",&m,&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i].val);
            a[i].index=i+1;
        }

        sort(a,a+n,compare);

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {   if(a[i].val+a[j].val>m)
                break;
                if(a[j].val==m-a[i].val)
                {   if(a[i].index<a[j].index)
                    printf("%d %d\n",a[i].index,a[j].index);
                    else
                        printf("%d %d\n",a[j].index,a[i].index);

                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        
    }
    return 0;
}