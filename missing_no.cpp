/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/missing-numbers/
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
map<long int ,long int >mm;
map<long int ,long int >::iterator it;

int main() {
   long int n,m,temp,i;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>temp;
        mm[temp]--;
    }
    
    cin>>m;
    for(i=0;i<m;i++)
        {
        cin>>temp;
        mm[temp]++;
    }
    
    for(it=mm.begin();it!=mm.end();it++)
        {
        if(it->second>0)
            cout<<it->first<<" ";
        }
    
    return 0;
}
