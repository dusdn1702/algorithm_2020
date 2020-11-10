spos = {True: [1, 0], False: [0, 1]}
dpos = {True: [1, -1], False: [-1, 1]}

def check(pos, n):
    if pos[1] < 0 or pos[0] < 0:
        return False
    elif pos[1] >= n or pos[0] >= n:
        return False
    return True

def arriveTime(answer, pos, time, horizontal):
    if horizontal:
        answer[pos[0]][pos[1]] = time
        return
    answer[pos[1]][pos[0]] = time

def checkMoveDiag(pos, diagdir, n):
    apos = dpos[diagdir[0]]
    ndpos = [pos[0] + apos[0], pos[1] + apos[1]]
    if check(ndpos, n):
        return True
    return False

def diagMove(pos, diagdir):
    apos = dpos[diagdir[0]]
    pos[0] = pos[0] + apos[0]
    pos[1] = pos[1] + apos[1]

def stMove(pos, diagdir, n):
    apos = spos[diagdir[0]]
    nspos = [pos[0] + apos[0], pos[1] + apos[1]]
    if not check(nspos, n):
        apos = spos[not diagdir[0]]
        nspos = [pos[0] + apos[0], pos[1] + apos[1]]
    pos[0] = nspos[0]
    pos[1] = nspos[1]
    diagdir[0] = not diagdir[0]

def move(pos, diagdir, nowTime, n):
    if checkMoveDiag(pos, diagdir, n):
        diagMove(pos, diagdir)
        return nowTime + 2
    stMove(pos, diagdir, n)
    return nowTime + 1

def solution(n, horizontal):
    answer = [[0 for i in range(n)] for i in range(n)]
    if n == 0:
        return answer
    nowTime = 0
    nowPose = [0, 0]
    diagdir = [False]
    while not (nowPose[1] == n - 1 and nowPose[0] == n - 1):
        nowTime = move(nowPose, diagdir, nowTime, n)
        arriveTime(answer, nowPose, nowTime, horizontal)
    return answer