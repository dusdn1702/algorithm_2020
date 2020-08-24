# 1차시도
# 첫번째가 없으면 안되지만 2단계까지만 배워도는 되는 부분 미고려
def solution(skill, skill_trees):
    answer = 0
    for i in skill_trees:
        skill_list = list(skill)
        haveToAsc = []
        for k in skill_list:
            haveToAsc.append(i.find(k))
        if haveToAsc.count(-1)!=0:
            break
        for j in range(len(skill)):
            if haveToAsc[j]<haveToAsc[j-1]:
                break
        answer+=1
    return answer

#2차시도
def solution(skill, skill_trees):
    answer = 0
    skill_list = list(skill)
    for i in skill_trees:
        tmp = ""
        isOk = True
        for k in i:
            if skill.find(k) != -1:
                tmp += k
        for j in range(len(tmp)):
            if skill_list[j] != tmp[j]:
                isOk = False
                break
        if isOk == True:
            answer+=1
    return answer