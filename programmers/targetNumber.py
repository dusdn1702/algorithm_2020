answer = 0
def solution(numbers, target):
    global answer
    dfs(0, 0, target, numbers)
    return answer
def dfs(value, idx, target, numbers):
    global answer
    n = len(numbers)
    if (idx == n):
        if (target == value):
            answer+=1
        return
    dfs(value+numbers[idx], idx+1, target, numbers)
    dfs(value-numbers[idx], idx+1, target, numbers)