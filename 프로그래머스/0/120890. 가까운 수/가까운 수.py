def solution(array, n):
    answer = array[0]
    for i in range(1, len(array)):
        if abs(n - array[i]) < abs(n - answer):
            answer = array[i]
        elif abs(n - array[i]) == abs(n - answer) and array[i] < answer:
            answer = array[i]
    return answer