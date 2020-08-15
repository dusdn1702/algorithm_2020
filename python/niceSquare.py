def gcd(a,b):
    if b==0: 
        return a
    return gcd(b, a%b)
def solution(w,h):
    answer = w*h
    if w==h:
        answer -=w
    elif w>h:
        answer-=(w+h-gcd(w,h))
    else:
        answer-=(w+h-gcd(h,w))
    return answer