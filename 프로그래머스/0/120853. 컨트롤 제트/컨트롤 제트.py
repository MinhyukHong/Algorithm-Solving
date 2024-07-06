def solution(s):
    answer = 0
    s = s.split()
    prev_num = 0
    for token in s:
        try:
            num = int(token)
            answer += num
            prev_num = num
        except ValueError:
            if token == 'Z':
                answer -= prev_num
    return answer