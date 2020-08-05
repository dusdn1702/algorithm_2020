#2557 
#print("Hello World!")

#10869
#A, B = map(int, input().split())
#print(A + B)
#print(A - B)
#print(A * B)
#print(int(A / B))
#print(A % B)

#10430
#A, B, C = map(int, input().split())
#print((A+B)%C)
#print(((A%C)+(B%C))%C)
#print((A*B)%C)
#print(((A%C)*(B%C))%C)

#2558
#A = int(input())
#B = int(input())
#print(A+B)

#2588
#A = int(input())
#B = int(input())
#n = int(1)
#print(A*(B%10))
#print(int((A*((B%100)-(B%10)))/10))
#print(int((A*((B%1000)-(B%100)))/100))
#print(A*B)
#2585_*
#A = int(input())
#B = input()
#list(B)
#for i in range(2,-1,-1):    #-1이 가장 뒷 글자
#    print(A*int(B[i]))
#print(A*int(B))


#3046
#R1, S = map(int, input().split())
#print((S*2)-R1)

#2163
#N, M = map(int, input().split())
#print(N*M-1)

#11021
#T = int(input())
#n = int(0)
#while n<T:
#    A, B = map(int, input().split())
#    n+=1
#    print("Case #"+str(n)+": "+str(A+B))

#11022
T = int(input())
n = int(0)
while n<T:
    A, B = map(int, input().split())
    n+=1
    print("Case #" + str(n) + ": " + str(A) + " + " + str(B) + " = " + str(A+B))

#11022_2
for i in range(1,int(input())+1):a,b=map(int,input().split());print("Case #%s:"%i,a,"+",b,"=",a+b)