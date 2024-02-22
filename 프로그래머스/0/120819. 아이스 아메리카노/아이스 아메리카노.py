def solution(money):
    
    answer = []
    
    cup = money // 5500
    change = money % 5500
    answer.extend([cup, change])
    
    return answer