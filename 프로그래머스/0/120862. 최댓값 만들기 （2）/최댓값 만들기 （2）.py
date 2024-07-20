def solution(numbers):
    numbers.sort()
    x = numbers[0] * numbers[1]
    y = numbers[-1] * numbers[-2]
    return max(x, y)