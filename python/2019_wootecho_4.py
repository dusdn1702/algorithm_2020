result = []
infos = ["kim password", "lee abc"]
actions = ["ADD 30", "LOGIN kim abc", "LOGIN lee password", "LOGIN kim password", "LOGIN kim password", "ADD 30", "ORDER", "ORDER", "ADD 40", "ADD 50"]
def checkIdPw(id, pw):
    for i in infos:
        iid, ipw = i.split()
        if iid == id and ipw == pw:
            return True
        else:
            continue
    return False

def solution(infos, actions):
    adds = []
    loginCheck = False
    for a in actions:
        act = a.split()
        if act[0] == 'ADD':
            if(loginCheck == True):
                adds.append(act[1])
                result.append("true")
            else:
                result.append("false")
        elif act[0] == 'LOGIN':
            if checkIdPw(act[1], act[2]) == True and loginCheck == False :
                loginCheck = True
                result.append("true")
            else:
                result.append("false")
        elif act[0] == 'ORDER':
            if not adds or loginCheck == False:
                result.append("false")
            else:
                result.append("true")
                adds.clear()
solution(infos, actions)
print(result)