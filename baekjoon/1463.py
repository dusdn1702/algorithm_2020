def solution(N):
    answer = int(0)
    dp = [N]
    while 1:
        if 1 in dp:
            return answer
        else:
            dp2 = []
            for i in dp:
                if i%3==0:
                    dp2.append(i/3)
                if i%2==0:
                    dp2.append(i/2)
                dp2.append(i-1)
            dp = dp2
            answer+=1
N = int(input())
print(solution(N))
