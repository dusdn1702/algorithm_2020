from collections import defaultdict

def solution(n, board):
    answer = 0
    n = 3
    board = [[3, 5, 6], [9, 2, 7], [4, 1, 8]]	
    g = defaultdict(list)
    for i in range(n):
        for j in range(n):
            for k in range(1, n*n):
                if board[i][j] == k:
                    g[k] = [i, j]
    print(g)
    return answer