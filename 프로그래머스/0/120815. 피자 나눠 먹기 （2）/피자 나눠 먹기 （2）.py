def gcd(a, b):
    
    while (b!=0):
        r = a % b
        a = b
        b = r
        
    return a

def solution(n):
    
    answer = (n * 6) / gcd(n, 6) / 6
    
    return answer