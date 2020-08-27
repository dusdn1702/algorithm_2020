from itertools import permutations
import math

def prime(number):
    if number < 2:
        return False
    k = math.sqrt(number)
    for i in range(2, int(k)+1):
        if number%i==0:
            return False
    return True
def solution(numbers):
    answer = []
    for j in range(1, len(numbers)+1):
        numberList = list(map(''.join, permutations(list(numbers), j)))
        for k in list(set(numberList)):
            if int(k)==1:
                break
            if prime(int(k)):
                answer.append(int(k))
    return len(set(answer))