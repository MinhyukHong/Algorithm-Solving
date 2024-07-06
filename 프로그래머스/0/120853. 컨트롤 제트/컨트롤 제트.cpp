#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int prev_num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]) || (s[i] == '-' && i + 1 < s.size() && isdigit(s[i + 1]))) {
            int num = 0;
            size_t length = 0;
            num = stoi(s.substr(i), &length);
            answer += num;
            prev_num = num;
            i += length - 1;
        } else if (s[i] == 'Z') {
            answer -= prev_num;
        }
    }
    return answer;
}