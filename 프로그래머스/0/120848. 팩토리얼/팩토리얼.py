import math

def solution(n):
    for i in range(n + 1):
        if math.factorial(i) > n:
             return i - 1
    return n