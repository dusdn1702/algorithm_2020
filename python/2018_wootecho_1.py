money = int(input())
moneys = [50000, 10000, 5000, 1000, 500, 100, 50, 10, 1]
result = [0]*9
for now in range(len(moneys)):
    result[now] += money // moneys[now]
    money %= moneys[now]
print(result)