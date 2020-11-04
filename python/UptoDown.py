# 정렬
# 위에서 아래로
# 수열을 큰수에서 작은 수의 순서로 정렬
# 첫째줄에 수열의 개수 N
# N개의 수 입력
# 출력 내림차순

N=input()
numbers = []
for _ in range(int(N)):
    numbers.append(input())
numbers.sort()
numbers.reverse()
for i in numbers:
    print(i, end=' ')