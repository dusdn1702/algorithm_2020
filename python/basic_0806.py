#2753
# n = int(input())
# if n%4==0:
#     if n%400==0:
#         print(1)
#     elif n%100!=0:
#         print(1)
#     else:
#         print(0)
# else:
#     print(0)

#10039
scores = []
total = int(0)
for _ in range(5):
    score = int(input())
    if score>=40:
        total+=score
    else:
        total+=40
print(total//5)