#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    
    int col = board[0] / 2;
    int row = board[1] / 2;
    vector<int> result = {0, 0};
    
    for (int i = 0; i < keyinput.size(); i++) {
        if (keyinput[i] == "left" && (result[0] - 1) >= -col) result[0] -= 1;
        else if (keyinput[i] == "right" && (result[0] + 1) <= col) result[0] += 1;
        else if (keyinput[i] == "up" && (result[1] + 1) <= row) result[1] += 1;
        else if (keyinput[i] ==  "down" && (result[1] - 1) >= -row) result[1] -= 1;
    }
    return result;
}