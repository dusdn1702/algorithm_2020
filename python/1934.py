#시간초과
T = int(input())
for _ in range(T):
    A, B = map(int, input().split())
    if A>B:
        A,B=B,A
        
    i = int(1)
    while i<B*A:
        if((B*i)%A==0):
            print(B*i)
            break
        else:
            i+=1

#정답
def lcm(a,b):
    d = gcd(a,b)
    return d*(a//d)*(b//d)
def gcd(a,b):
    return gcd(b%a,a) if b%a else a

T = int(input())
for _ in range(T):
    A, B = map(int, input().split())
    if A>B:
        A,B=B,A
    print(lcm(A,B))