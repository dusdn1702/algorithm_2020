#1002
# 조규현x1y1 조규현계산거리r1 백승환x2y2 백승환계산거리r2
# 류재명이 있을수 있는 좌표의 수

T = int(input())
for _ in range(T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    d = (x2-x1)**2+(y2-y1)**2
    farther = (r1+r2)**2
    closer = (r1-r2)**2
    if x1==x2 and y1==y2:
        if r1==r2:
            print(-1)
        else:
            print(0)
    else:
        if farther<d:
            print(0)
        elif farther==d:
            print(1)
        else:
            if closer == d:
                print(1)
            elif closer > d:
                print(0)
            else:
                print(2)