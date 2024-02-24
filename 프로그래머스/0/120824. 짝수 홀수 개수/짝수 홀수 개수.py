def solution(num_list):
    answer = []
    cnt_even = 0
    cnt_odd = 0
    
    for i in num_list:
        if i % 2 == 0:
            cnt_even += 1
        else:
            cnt_odd += 1
    
    answer.extend([cnt_even, cnt_odd])
    
    return answer