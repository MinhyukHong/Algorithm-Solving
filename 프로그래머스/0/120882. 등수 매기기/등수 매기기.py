def solution(score):
    avg = [(i[0] + i[1]) / 2 for i in score]
    sorted_avg = sorted(avg, reverse=True)
    rank = [sorted_avg.index(a) + 1 for a in avg]
    return rank