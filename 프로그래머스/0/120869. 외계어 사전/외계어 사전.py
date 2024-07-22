def solution(spell, dic):
    spell = set(spell)
    for word in dic:
        if spell.issubset(set(word)):
            return 1
    return 2
    return answer