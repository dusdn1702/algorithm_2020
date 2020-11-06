prices = list(map(int, input().split()))
discounts = list(map(int, input().split()))

prices.sort(reverse=True)
discounts.sort(reverse=True)

for i in range(len(discounts)):
    prices[i]= round((0.01*(100-discounts[i]))*prices[i])
result = sum(prices)
print(result)