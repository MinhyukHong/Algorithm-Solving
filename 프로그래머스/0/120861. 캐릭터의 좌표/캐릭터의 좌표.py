def solution(keyinput, board):
    col = board[0]
    row = board[1]
    result = [0, 0]
    for key in keyinput:
        if key == "left" and result[0] - 1 >= -(col // 2):
            result[0] -= 1
        elif key == "right" and result[0] + 1 <= (col // 2):
            result[0] += 1
        elif key == "up" and result[1] + 1 <= (row // 2):
            result[1] += 1
        elif key == "down" and result[1] - 1 >= -(row // 2):
            result[1] -= 1
    return result