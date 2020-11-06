# 이진탐색
# 부품찾기
# 부품 N개 손님이 원하는 M개 있는지 검사 있으면 yes 없으면 no
N = int(input())
items = list(map(int, input().split()))
M = int(input())
find = list(map(int, input().split()))
answer = []
for i in find:
    if i in items:
        answer.append('yes')
    else:
        answer.append('no')
for i in answer:
    print(i, end=' ')

# # 이진탐색 사용한 책 풀이
# def binary_search(arr, start, end, target):
#     while start<=end:
#         mid = (start + end) // 2
#         if arr[mid] == target:
#             return mid
#         elif arr[mid] > target:
#             end = mid - 1
#         else:
#             start = mid + 1
#         retrun None
# N = int(input())
# items = list(map(int, input().split()))
# M = int(input())
# find = list(map(int, input().split()))
# items.sort()

# for i in find:
#     result = binary_search(items, 0, N-1, i)
#     if result != None:
#         print('yes', end=' ')
#     else:
#         print('no', end=' ')