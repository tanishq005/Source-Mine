/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/stockmax/
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,a[50001],b[50001],max,n,i;
    long long int sum,ans,cost;
    scanf("%d",&t);
    while(t--)
        { 
        sum=0; max=0; ans=0; cost=0;
        scanf("%d",&n);
         
         for(i=0;i<=50000;i++)
             b[i]=0;
        
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        b[n-1]=1;
        max=a[n-1];
        for(i=n-2;i>=0;i--)
            {
            if(a[i]>max){
                max=a[i];
                b[i]=1;
            }
            else
                b[i]=0;
            }

        for(i=0;i<n;i++){
        if(b[i]==0)
        { sum++;
         cost+=a[i];
        }
            else if(b[i]==1)
                {
                ans+=a[i]*sum-cost;
                sum=0; cost=0;
            }
    }
    
    printf("%lld\n",ans);
    }
    return 0;
}
