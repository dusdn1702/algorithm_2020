T = int(input())

for _ in range(T):
    N=int(input())
    drink = []
    for _ in range(N):
        S,L= map(str, input().split())
        drink.append([S, int(L)])
    drink = sorted(drink, key = lambda x:x[1])
    print(drink[-1][0])
    
