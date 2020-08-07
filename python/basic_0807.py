#2480
#numberList = list(map(int, input().split()))
#numberSet = set(numberList)
#if len(numberList)==len(numberSet):
#    numberList.sort()
#    print(numberList[-1]*100)
#elif len(numberList)-1 == len(numberSet):
#    for i in numberSet:
#        numberList.remove(i)
#    print(1000+numberList[0]*100)
#elif len(numberList)-2 == len(numberSet):
#    print(10000+numberList[0]*1000)

#4101
#while 1:
#    a, b = map(int, input().split())
#    if a==b==0:
#        break
#    if a<=b:
#        print("No")
#    else:
#        print("Yes")

#10156
#a,b,c = map(int, input().split())
#if a*b<c:
#    print(0)
#else:
#    print(a*b-c)

#3009
# x1, y1 = map(int, input().split())
# x2, y2 = map(int, input().split())
# x3, y3 = map(int, input().split())    
# if(x1==x2):
#     x4 = int(x3)
# elif(x1==x3):
#     x4 = int(x2)
# else:
#     x4 = int(x1)
# if(y1==y2):
#     y4 = int(y3)
# elif(y1==y3):
#     y4 = int(y2)
# else:
#     y4 = int(y1)
# print(x4, y4)

#3009_2
# xlist = []
# ylist = []
# for _ in range(3):
#     x, y = map(int, input().split())
#     xlist.append(x)
#     ylist.append(y)
# for _ in range(3):
#     if xlist.count(xlist[i]) == 1:
#         x = xlist[i]
#     if ylist.count(ylist[i]) == 1:
#         y = ylist[i]
# print(x,y)

#2476
T = int(input())
people = []

def calculate(a, b, c):
    numberList = [a,b,c]
    numberSet = set(numberList)
    if len(numberList)==len(numberSet):
        numberList.sort()
        return(numberList[-1]*100)
    elif len(numberList)-1 == len(numberSet):
        for i in numberSet:
            numberList.remove(i)
        return(1000+numberList[0]*100)
    elif len(numberList)-2 == len(numberSet):
        return(10000+numberList[0]*1000)

for _ in range(T):
    a, b, c = map(int, input().split())
    people.append(calculate(a,b,c))
people.sort()
print(people[-1])

