def solution(cipher, code):
    answer = ''
    temp = []
    for i in cipher:
        temp.append(i)
    for j in range(len(temp)):
        if (j + 1) % code == 0:
            answer += temp[j]
    return answer