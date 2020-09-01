def solution(participant, completion):
    answer = ''
    for runner in completion:
        participant.remove(runner)
        answer+=str(participant[0])
        return answer

def solution(participant, completion):
    answer = ''
    participant.sort()
    completion.sort()
    
    for part, com in zip(participant, completion):
        if part!=com:
            return part
    return participant[-1]


import collections

def solution(participant, completion):
    answer = collections.Counter(participant) - collections.Counter(completion)
    return list(answer.keys())[0]