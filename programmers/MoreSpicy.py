#1 - 연습문제만 통과
from collections import deque
def solution(scoville, K):
    answer = 0
    scoville.sort()
    while 1:
        if scoville[0]<K:
            scoville.sort()
            tmp = scoville[0]
            del scoville[0]
            tmp += (scoville[0]*2)    
            scoville.insert(0,tmp)
            answer+=1
        else:
            return answer
    return -1

#2 - 통과
import heapq
def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)
    while 1:
        if scoville[0]<K:
            min1 = heapq.heappop(scoville)
            min2 = heapq.heappop(scoville)
            heapq.heappush(scoville, min1 + (min2*2))
            answer+=1
            if len(scoville)==1 and scoville[0]<K: #두개만 있을 때도 고려!!
                return -1
        elif scoville[0]>=K:
            return answer