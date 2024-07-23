#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int number = 0;
    bool isNumber = false;
    
    for (char c : my_string) {
        if (isdigit(c)) {
            number = number * 10 + (c - '0');
            isNumber = true;
        }
        else {
            answer += number;
            number = 0;
            isNumber = false;
        }
    }
    if (isNumber) {
        answer += number;
    }
    return answer;
}