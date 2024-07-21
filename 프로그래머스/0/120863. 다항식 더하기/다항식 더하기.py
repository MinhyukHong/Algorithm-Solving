def solution(polynomial):
    x_term = 0
    constant_term = 0
    terms = polynomial.split(" + ")
    
    for term in terms:
        if 'x' in term:
            if term == 'x':
                x_term += 1
            else:
                x_term += int(term.replace('x', ''))
        else:
            constant_term += int(term)
    
    result = []
    
    if x_term != 0:
        if x_term == 1:
            result.append("x")
        else:
            result.append(f"{x_term}x")
    
    if constant_term != 0:
        result.append(f"{constant_term}")
        
    return " + ".join(result)
            