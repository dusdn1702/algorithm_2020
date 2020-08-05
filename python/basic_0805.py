#2678
#import datetime
#print(datetime.date.today())
#print(str(datetime.datetime.now())[:10])

#2525
# A, B = map(int, input().split())
# C = int(input())
# B += C
# if B >= 60:
#     A+=int(B/60)
#     B%=60
#     if A > 23:
#         A-=24
# print(str(A)+' '+str(B))

#2530
# A, B, C = map(int, input().split())
# D = int(input())
# C += D
# if C >= 60:
#     B+=(C//60)
#     C%=60
# if B >= 60:
#     A+=(B//60)
#     B%=60
# if A >= 24:
#     A%=24
# print(A,B,C)

#2914
# A, I = map(int, input().split())
# print(A*(I-1)+1)

#5355
# T = int(input())
# for _ in range(T):
#     mars = list(map(str, input().split()))
#     answer = float(0)
#     for i in range(len(mars)):
#         if i == 0:
#             answer += float(mars[i])
#         else:
#             if mars[i] == "#":
#                 answer -= 7
#             elif mars[i] == "@":
#                 answer *= 3
#             elif mars[i] == "%":
#                 answer += 5
#     print("%0.2f" %answer)

#2675
# T = int(input())
# for _ in range(T):
#     num, string = input().split()
#     answer = ''
#     for i in string:
#         answer += int(num)*i
#     print(answer)

#2935
# A = int(input())
# operator = str(input())
# B = int(input())
# if operator == "*":
#     print(A*B)
# else:
#     print(A+B)

#10817
numbers = list(map(int, input().split()))
numbers.sort(reverse=True)
print(numbers[1])
