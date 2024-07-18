def solution(array):
    answer = ""
    for num in array:
        answer+=str(num)
    return answer.count("7")