# 소인수분해
# 숫자 입력 받으면 소인수들을 오름차순으로 출력하기
# i를 2부터 나누어떨어지는 것 차례로 출력

N = int(input()); i=2
while N>1:
    if(N%i==0):
        N/=i
        print(i)
    else:
         i+=1