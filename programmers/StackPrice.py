def solution(prices):
    answer = []
    prices_list = list(prices)
    for i in range(len(prices_list)):
        cnt = int(0)
        for j in range(i+1, len(prices_list)):
            cnt +=1
            if prices_list[i] > prices_list[j]:
                break
        answer.append(cnt)
    return answer