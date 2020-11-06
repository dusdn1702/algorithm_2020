# 5로 나누어떨어지면 5로, 3으로 되면 3으로, 2로 되면 2로, 아니면 1 빼기
# 1로 만들어서 가장 연산 적게할 때 연산 수 출력
def sol(N):
    d = [0]*30001
    for i in range(2, N+1):
        d[i]=d[i-1]+1
        if N%5==0:
            d[i]=min(d[i], d[i//5]+1)
        elif N%3==0:
            d[i]=min(d[i], d[i//3]+1)
        elif N%2==0:
            d[i]=min(d[i], d[i//2]+1)
    return d[N]
number = int(input())
print(sol(number))