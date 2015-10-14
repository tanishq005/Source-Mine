/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/bigger-is-greater/
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
#include<iostream>

int main() {

    int t;
    char a[10000]; string b;
    scanf("%d\n",&t);
    while(t--)
        {
        scanf("%s",a);
        if(next_permutation(a,a+strlen(a))==0)
            printf("no answer\n");
        else
        printf("%s\n",a);
    }
    return 0;
}
