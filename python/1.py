def solution(grades, weights, threshold):
    answer = -1234567890
    realGrades = [10, 9, 8, 7, 6, 5, 4, 3, 0]
    
    result = 0

    gradeAndWeight = defaultdict()
    gradeAndWeight["A+"]=10
    gradeAndWeight["A0"]=9
    gradeAndWeight["B+"]=8
    gradeAndWeight["B0"]=7
    gradeAndWeight["C+"]=6
    gradeAndWeight["C0"]=5
    gradeAndWeight["D+"]=4
    gradeAndWeight["D0"]=3
    gradeAndWeight["F"]=0
    
    for grade in gradeAndWeight.keys():
        for g in range(len(grades)):
            if grade == grades[g]:
                result += (gradeAndWeight[grade] * weights[g])
    
    answer = result-threshold
    return answer