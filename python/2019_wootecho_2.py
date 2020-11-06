log = [0]*24
n = int(input())
for _ in range(n):
    time = str(input())
    #hour = time[11:13]
    hour = time[11] + time[12]
    koreanHour = int(hour)+9%24
    log[koreanHour] += 1
print(log)