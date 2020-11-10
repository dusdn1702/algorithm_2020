import heapq
from collections import deque
map = [[3, 5, 6], [9, 2, 7], [4, 1, 8]]
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(x, y, end):
    distance = 0
    queue = deque()
    queue.append((x,y))
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx<0:
                nx = x + (n-1)
            elif nx>=n:
                nx = x - (n) #?
            elif ny<0:
                ny = y + (n-1)
            elif ny>=n:
                ny = y - n
            if graph[nx][ny] == end:
                print(distance)
            distance += 1
                # graph[nx][ny] = graph[x][y] + 1
                # queue.append((nx, ny))
    return distance

# def dijkstra(start):
#     q = []
#     heapq.heappush(q, (0, start))
#     q[start] = 0
#     while q:
#         dist, now = heapq.heappop(q)
#         if distance[now] < dist:
#             continue
#         for i in graph[now]:
#             cost = dist + 1
#             if cost < d[i[0]]:
#                 distance[i[0]] = cost
#                 heapq.heappush(q, (cost, i[0]))
#     print(q)
def solution(n, board):
    answer = 0
    graph = [[] for _ in range(n)]
    for i in range(n*n):
        if i+n <= n*(n-1):#하
            graph[i].append(i+n) 
        else:
            graph[i].append((i+n)-(n*n))
        if i%n == (n-1): #우
            graph[i].append(i-(n-1))
        else:
            graph[i].append(i+1)
        if i%n == 0: #좌
            graph[i].append(i+(n-1))
        else:
            graph[i].append(i-1)
        if i<n: #상
            graph[i].append(i+(n-1)*n)
        else:
            graph[i].append(i-n)

    dijkstra(0)
        
    return answer