def solution(numbers):
    temp = []
    max_num1 = max(numbers)
    temp.append(max_num1)
    numbers.remove(max_num1)
    max_num2 = max(numbers)
    temp.append(max_num2)
    numbers.remove(max_num2)
    answer = temp[0] * temp[1]
    return answer