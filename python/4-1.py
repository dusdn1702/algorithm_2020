import heapq
from collections import deque
board = [[3, 5, 6], [9, 2, 7], [4, 1, 8]]
n = 3
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(x, y, end):
    distance = 0
    queue = deque()
    queue.append((x,y))
    print("hi")
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
            print(hi)
            distance += 1
            if board[nx][ny] == end:
                print(distance)
                return list(nx, ny, distance)
                # graph[nx][ny] = graph[x][y] + 1
                # queue.append((nx, ny))
    return distance

def solution(n, board):
    answer = 0
    # newx, newy = 0, 0
    print(bfs(0,0,1))
    # for i in range(1, n*n-1):
    #     newx, newy, newanswer = bfs(newx, newy, i)
    return answer