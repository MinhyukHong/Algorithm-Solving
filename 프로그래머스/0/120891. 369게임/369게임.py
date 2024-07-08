def solution(order):
    answer = 0
    order = str(order)
    for char in order:
        if char in '369':
            answer += 1
    return answer