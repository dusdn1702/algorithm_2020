#2754
# score = {'A+' : 4.3, 'A0' : 4.0, 'A-' : 3.7, 
#         'B+' : 3.3, 'B0' : 3.0, 'B-' : 2.7, 
#         'C+': 2.3, 'C0' : 2.0, 'C-' : 1.7,
#         'D+': 1.3, 'D0': 1.0, 'D-': 0.7,
#         'F': 0.0}
# print(score[str(input())])

#2884
# H, M = map(int, input().split())
# M-=45
# if M<0:
#         H-=1
#         M+=60
#         if H<0:
#                 H+=24
# print(H,M)

#7567
# bowl = str(input())
# height = int(0)
# for i in range(len(bowl)):
#         if height == 0:
#                 height += 10
#                 continue
#         if bowl[i-1]==bowl[i]:
#                 height+=5
#         else:
#                 height+=10
# print(height)

#5063
# T=int(input())
# for _ in range(T):
#         a, b, c = map(int, input().split())
#         if b-a<c:
#                 print('do not advertise')
#         elif b-a==c:
#                 print('does not matter')
#         else:
#                 print('advertise')

#10102
# N=int(input())
# score = str(input())
# acount = int(0)
# bcount = int(0)
# for i in range(len(score)):
#         if score[i] == 'A':
#                 acount+=1
#         else:
#                 bcount+=1
# if acount>bcount:
#         print('A')
# elif acount<bcount:
#         print('B')
# else:
#         print('Tie')

#10886
# N = int(input())
# agree = int(0)
# for _ in range(N):
#         opinion = int(input())
#         if opinion == 1:
#                 agree+=1
# if N/2<agree:
#         print('Junhee is cute!')
# else:
#         print('Junhee is not cute!')

#10988
alphabet = str(input())
reversealpha = alphabet[::-1]
if alphabet == reversealpha:
        print(1)
else:
        print(0)