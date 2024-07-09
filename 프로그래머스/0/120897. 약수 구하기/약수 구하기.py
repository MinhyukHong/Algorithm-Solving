def solution(n):
    answer = []
    for num in range(1, n):
        if n % num == 0:
            answer.append(num)
    answer.append(n)
    return answer