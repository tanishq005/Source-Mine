/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/two-arrays
*/
#include <cmath>
#include <cstdio>
#include <vector>       
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,i,temp,k,t;
    cin>>t;
    while(t--)
    {
            vector<int>a;
            vector<int>b;
            cin>>n>>k; bool flag=true;
            for(i=0;i<n;i++)
                {
                    cin>>temp;
                    a.push_back(temp);
                }
        
        for(i=0;i<n;i++)
           {
                cin>>temp;
                b.push_back(temp);
            }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        for(i=0;i<n;i++)
            { 
            
                  if(a[i]+b[n-1-i]<k)
                    {
                        flag=false;
                        break;
                    }
    }
       
        if(flag==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
        
        
    }
    return 0;
}