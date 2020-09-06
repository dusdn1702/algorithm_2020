def solution(brown, yellow):
    answer = []
    sum = brown + yellow
    for i in range(3, sum):
        if sum%i==0:
            if (i-2)*((sum/i)-2)==yellow:
                answer.append(max(i, sum/i))
                answer.append(min(i, sum/i))
                break
    return answer