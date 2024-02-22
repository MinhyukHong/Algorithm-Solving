def get_gcd(a, b):
    if b > a:
        a, b = b, a
    
    for i in range(min(a, b), 0, -1):
        if a % i == 0 and b % i == 0:
            return i

def solution(numer1, denom1, numer2, denom2):
    answer = []
    denom = denom1*denom2
    numer = numer1*denom2 + numer2*denom1
    gcd = get_gcd(numer, denom)
    answer.append(numer//gcd)
    answer.append(denom//gcd)
    return answer