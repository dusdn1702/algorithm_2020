forms = [["jm@email.com", "제이엠"], ["jason@email.com", "제이슨"], ["woniee@email.com", "워니"], ["mj@email.com", "엠제이"], ["nowm@email.com", "이제엠"]]
emails = []
names = []
result = []
def findSame(name1, name2):
    for start in range(0, len(name1)-2):
        for s in range(0, len(name2)-2):
            if((name1[start]+name1[start+1]) == (name2[s]+name2[s+1])):
                return True
    return False
for form in forms:
    email, name = form[0], form[1]
    emails.append(email)
    names.append(name)
for i in range(0, len(names)-1):
    for j in range(i, len(names)):
        if findSame(names[i], names[j])==True:
            result.append(emails[i])
            result.append(emails[j])
result.sort()
dicResult = set(result)
print(dicResult)
