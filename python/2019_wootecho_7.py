from collections import defaultdict
import operator
def solution():
    answer = 0
    user = "mrko"
    friends = [ ["donut", 'andole'], ["donut", "jun"], ["donut", "mrko"], ["shakevan", "andole"], ["shakevan", "jun"], ["shakevan", "mrko"] ]
    visitors = ["bedi", "bedi", "donut", "bedi", "shakevan"]
    who_fr = defaultdict(list)
    for f in friends:
        who_fr[f[0]].append(f[1])
        who_fr[f[1]].append(f[0])
    #유저의 친구들이 갖고 있는 친구들을 돌면서 친구의 점수 10점씩 올리고, 그때 유저의 이름이면 10점 안올림. 
    score = defaultdict(int)
    for f in who_fr[user]:
        # print(who_fr[f])
        for a in who_fr[f]:
            if a is not user:
                score[a] += 10
    #visitor
    for v in visitors:
        if v not in who_fr[user]:
            score[v] += 1
    print(score)
    # print(who_fr)
    out_tmp = sorted(score.items(), key=lambda x: [-x[1], x[0]] ,reverse=False)[:5]
    out = []
    for o in out_tmp:
        out.append(o[0])
    print(out)
    return answer
solution()