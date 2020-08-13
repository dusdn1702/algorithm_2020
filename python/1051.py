# 1051
N, M = map(int, input().split())
numbersMap = []
for _ in range(N):
    numbersMap.append(list(map(int,input())))

maxSize = min(N,M)
result = int(0)

for i in range(N):
    for j in range(M):
        for k in range(maxSize):
            if i+k<N and j+k<M:
                if numbersMap[i][j]==numbersMap[i][j+k]==numbersMap[i+k][j]==numbersMap[i+k][j+k]:
                    if result<k:
                        result=k
print((k+1)**2)