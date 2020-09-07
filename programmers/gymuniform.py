def solution(n, lost, reserve):
    answer = (n-len(lost))
    for i in lost:
        for j in reserve:
            if i-1==j or i+1==j:
                lost.remove(i)
                reserve.remove(j)
                answer+=1
                
    return answer


def solution(n, lost, reserve):
    answer = (n-len(lost))

    total = set(lost + reserve)
    lost.sort()
    reserve.sort()
    answer += (len(lost)+len(reserve)-len(total))
    for i in range(len(lost)):
        if lost[i] in total:
            for j in range(len(reserve)):
                if reserve[j] in total:
                    if lost[i]-1==reserve[j] or lost[i]+1==reserve[j]:
                        lost[i]=-1
                        reserve[j]=-1
                        answer+=1
        print(lost, reserve)
    return answer

def solution(n, lost, reserve):
    realReserve = [i for i in reserve if i not in lost]
    realLost = [j for j in lost if j not in reserve]
    
    for r in realReserve:
        if r-1 in realLost:
            realLost.remove(r-1)
        elif r+1 in realLost:
            realLost.remove(r+1)
    return n-len(realLost)