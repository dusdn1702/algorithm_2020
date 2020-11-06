from string import ascii_lowercase, ascii_uppercase

realSmall = list(ascii_lowercase)
realBig = list(ascii_uppercase)
frogSmall = []
frogBig = []
for i in range(len(realSmall)-1, -1, -1):
    frogSmall.append(realSmall[i])
    frogBig.append(realBig[i])
result = []
word = "I love you"
for i in range(len(word)):
    if word[i] in realBig:
        for j in range(len(realBig)):
            if realBig[j] == word[i]:
                result.append(frogBig[j])
    elif word[i] in realSmall:
        for j in range(len(realSmall)):
            if realSmall[j] == word[i]:
                result.append(frogSmall[j])
    else:
        result.append(word[i])   
realResult = ""
for i in result:
    realResult += str(i)
print(realResult)