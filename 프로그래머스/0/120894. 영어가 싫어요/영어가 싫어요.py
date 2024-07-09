def solution(numbers):
    answer = 0
    num_dict = {"zero":0, "one":1, "two":2, "three":3, "four":4, "five":5, "six":6, "seven":7, "eight":8, "nine":9}
    temp = ""
    for char in numbers:
        temp += char
        if temp in num_dict:
            answer = answer * 10 + num_dict[temp]
            temp = ""
    return answer