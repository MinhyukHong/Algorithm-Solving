def solution(strlist):
    answer = []
    for i in range(len(strlist)):
        count = 0
        for j in strlist[i]:
            count += 1
        answer.append(count)
    return answer