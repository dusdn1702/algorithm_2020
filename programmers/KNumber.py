def solution(array, commands):
    answer = []
    for i in commands:
        arr = []
        for j in range(i[0]-1,i[1]):
            arr.append(array[j])
        arr.sort()
        answer.append(arr[i[2]-1])
    return answer