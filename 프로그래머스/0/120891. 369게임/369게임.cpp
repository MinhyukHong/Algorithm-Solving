#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string str_order = to_string(order);
    for (char c : str_order) {
        if (c == '3' || c == '6' || c == '9') {
            answer += 1;
        }
    }
    return answer;
}