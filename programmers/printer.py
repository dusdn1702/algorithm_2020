def solution(priorities, location):
    answer = 0
    first_priority = max(priorities)
    while 1:
        first_number = priorities.pop(0)
        if first_number == first_priority:
            answer+=1
            if location == 0:
                break
            else:
                location -=1
            first_priority = max(priorities)
        else:
            priorities.append(first_number)
            if location == 0:
                location = len(priorities)-1
            else:
                location -=1
    return answer