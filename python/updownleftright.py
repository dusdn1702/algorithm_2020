#상하좌우  
#구현  
#상하좌우 주어지고 공간의 크기 주어질 때 최종 도착지  
n=int(input())
moves=list(map(str, input().split()))
x, y = 1, 1
for i in moves:
    if i == 'L':
        if x-1>0:
            x-=1
    elif i == 'R':
        if x+1<=n:
            x+=1
    elif i =='U':
        if y-1>0:
            y-=1
    else:
        if y+1<=n:
            y+=1
print(y, x)

## 책의 정석 풀이
n=int(input())
x, y = 1, 1
moves = input().split()
dx=[0, 0, -1, 1]
dy=[-1, -1, 0, 0]
moving_types = ['L', 'R', 'U', 'D']

for i in moves:
    for j in range(len(moving_types)):
        if i==moving_types[j]:
            nx = x +dx[j]
            ny = y + dy[j]
    if nx<1 or ny<1 or nx>n or ny>n:
        continue
    x, y = nx, ny
print (x, y)