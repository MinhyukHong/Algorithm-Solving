def solution(age):
    alfabet = []
    for c in range(97, 123):
        alfabet.append(chr(c))
    
    if age == 1000:
        answer = 'baaa'
    elif age >= 100:
        answer = alfabet[age//100] + alfabet[age%100//10] + alfabet[age%100%10]
    elif age >= 10:
        answer = alfabet[age//10] + alfabet[age%10]
    else:
        answer = alfabet[age]
    
    return answer