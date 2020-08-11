#10162
n = int(input())
A=5*60
B=60
C=10
a,b,c=0,0,0
while n-A>=0:
    n-=A
    a+=1
while n-B>=0:
    n-=B
    b+=1
while n-C>=0:
    n-=C
    c+=1
if n!=0:
    print(-1)
else:
    print(a,b,c)