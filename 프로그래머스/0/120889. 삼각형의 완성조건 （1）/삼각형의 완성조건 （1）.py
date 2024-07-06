def solution(sides):
    answer = 0
    max_side = max(sides)
    other_sides_sum = sum(sides) - max_side
    if max_side < other_sides_sum:
        answer = 1
    else:
        answer = 2
    return answer