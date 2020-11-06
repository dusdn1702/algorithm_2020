import math
def calculate(x, y, restx, resty):
    distance = math.sqrt((restx-x)**2 + (resty-y)**2)
    return distance
restx, resty = map(int, input().split())
k = int(input())
ridersNum = int(input())
riders = []
result = 0
for _ in range(ridersNum):
    riderx, ridery = map(int, input().split())
    if k >= calculate(riderx, ridery, restx, resty):
        result+=1
print(result)