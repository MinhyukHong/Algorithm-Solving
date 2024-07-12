import math

def solution(n):
    root = int(math.sqrt(n))
    if math.pow(root, 2) == n:
        return 1
    else:
        return 2