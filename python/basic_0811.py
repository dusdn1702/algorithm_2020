#5086
# while 1:
    # A, B = map(int, input().split())
    # if A==B:
    #     break
    # if A>B:
    #     if A%B==0:
    #         print('multiple')
    #         continue
    # else:
    #     if B%A==0:
    #         print('factor')
    #         continue
    # print('neither')

#5717
# while 1:
#     A, B = map(int, input().split())
#     if A==B==0:
#         break
#     print(A+B)

#9610
# n = int(input())
# q1,q2,q3,q4,axis=0,0,0,0,0
# for _ in range(n):
#     x, y = map(int, input().split())
#     if x==0 or y==0:
#         axis+=1
#     elif x>0 and y>0:
#         q1+=1
#     elif x<0 and y>0:
#         q2+=1
#     elif x<0 and y<0:
#         q3+=1
#     elif x>0 and y<0:
#         q4+=1
# print("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d" %(q1, q2, q3, q4, axis))

#8968
# t = int(input())
# for _ in range(t):
#     sum = int(0)
#     s = str(input())
#     count = int(1)
#     for i in range(len(s)):
#         if s[i]=='O':
#             if i == 0:
#                 count = 1
#             elif s[i-1]==s[i]:
#                 count+=1
#             else:
#                 count = 1
#             sum+=count
#     print(sum)

#9506
# while 1:
#     n = int(input())
#     if n == -1:
#         break
#     numbers = []
#     for i in range(1, n//2+1):
#         if n%i==0:
#             numbers.append(i)
#     if sum(numbers)==n:
#         print(str(n)+' = '+' + '.join(map(str, numbers)))
#     else:
#         print(str(n) + ' is NOT perfect.')

# #10162
# n = int(input())
# A=5*60
# B=60
# C=10
# a,b,c=0,0,0
# while n-A>=0:
#     n-=A
#     a+=1
# while n-B>=0:
#     n-=B
#     b+=1
# while n-C>=0:
#     n-=C
#     c+=1
# if n!=0:
#     print(-1)
# else:
#     print(a,b,c)

#10103
# t = int(input())
# A, B = 100, 100
# for _ in range(t):
#     a, b = map(int, input().split())
#     if a<b:
#         A-=b
#     elif b<a:
#         B-=a
# print(A)
# print(B)

#10214
# t = int(input())
# for _ in range(t):
#     A,B=0,0
#     for _ in range(9):
#         a, b = map(int, input().split())
#         B+=b
#         A+=a
#     if A<B:
#         print('Korea')
#     elif B<A:
#         print('Yonsei')
#     else:
#         print('Draw')

#10757
A,B=map(int, input().split())
print(A+B)
