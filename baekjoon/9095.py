def solution(N, numbers):
    for i in range(3, 11):
        numbers.append(numbers[i-1]+numbers[i-2]+numbers[i-3])
    return(numbers[N-1])
    
T= int(input())
numbers=[1,2,4]
for _ in range(T):
    print(solution(int(input()), numbers))   
