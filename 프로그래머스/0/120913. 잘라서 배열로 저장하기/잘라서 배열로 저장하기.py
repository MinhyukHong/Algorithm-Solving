def solution(my_str, n):
    answer = []
    temp = ""
    cnt = 0
    for c in my_str:
        temp += c
        cnt += 1
        if cnt == n:
            answer.append(temp)
            cnt = 0
            temp = ""    
    if temp:
        answer.append(temp)
    return answer