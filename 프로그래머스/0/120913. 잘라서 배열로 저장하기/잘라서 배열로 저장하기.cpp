#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int count = 0;
    string temp = "";
    for (char c : my_str) {
        count++;
        temp += c;
        if (count == n) {
            answer.push_back(temp);
            count = 0;
            temp = "";
        }
    }
    if (!temp.empty()) {
        answer.push_back(temp);
    }
    return answer;
}