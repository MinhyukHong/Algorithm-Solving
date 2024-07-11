def solution(n):
    answer = 0
    number = str(n)
    for i in number:
        answer += int(i)
    return answer