def solution(emergency):
    sorted_list = sorted(emergency, reverse=True)
    answer = [sorted_list.index(s)+1 for s in emergency]
    
    return answer