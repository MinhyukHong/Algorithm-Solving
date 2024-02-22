def solution(n):
    answer = []
    tmp = []
    
    for i in range(0, n+1):
        tmp.append(i)
    
    for j in tmp:
        if j%2!=0:
            answer.append(j)
    
    answer.sort()
    
    return answer