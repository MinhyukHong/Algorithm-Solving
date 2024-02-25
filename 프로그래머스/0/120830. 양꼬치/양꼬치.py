def solution(n, k):
    answer = 12000*n + 2000*k
    div = n // 10
    if div >= 1:
        answer = answer - 2000*div
    return int(answer)