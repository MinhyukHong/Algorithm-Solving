def solution(rsp):
    temp = []
    idx = 0
    while idx < len(rsp):
        if rsp[idx] == '2':
            temp.append('0')
        elif rsp[idx] == '0':
            temp.append('5')
        else:
            temp.append('2')
        idx += 1
    answer = ''.join(temp)
    return answer