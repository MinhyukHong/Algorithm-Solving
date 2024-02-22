def solution(array):
    tmp = []
    for elem in array:
        tmp.append(elem)
    tmp.sort()
    idx = len(tmp) // 2
    answer = tmp[idx]
    return answer