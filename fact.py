'''
 Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005
Problem Link
https://www.hackerrank.com/challenges/extra-long-factorials/
'''
a=[]
for i in range (101):
    a.append(0)
a[1]=1
a[2]=2
for i in range(3,101):
    a[i]=a[i-1]*i
        

x=input();
x=int(x);
print(a[x])