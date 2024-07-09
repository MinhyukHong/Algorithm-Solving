def solution(s):
    answer = ''
    answer = "".join(sorted([char for char in s if s.count(char) == 1]))
    return answer