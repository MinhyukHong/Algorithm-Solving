def solution(my_string, num1, num2):
    answer = ''
    my_list = list(my_string)
    for i in range(len(my_list)):
        if i == num1:
            temp = my_list[i];
            my_list[i] = my_list[num2]
            my_list[num2] = temp
    answer = ''.join(my_list)
    return answer