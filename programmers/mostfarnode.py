def solution(n, edge):
    answer = 0
    start = []
    check = {}
    for i in range(len(edge)):
        for j in range(len(i)):
            if j not in check.keys():
                check[j]=false
        if i[0]==1:
            start.append(i[0])
            start.append(i[1])
    return answer
def find(edge, start):
    for k in len(edge):
        if k[0]==start[-1] and check[k[0]]==false and check[k[1]]==false:
            start.append(k[0])
            check[k[0]]=true
        ##start각각에 뒤에 붙어야지..