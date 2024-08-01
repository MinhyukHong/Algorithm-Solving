#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char k_char = '0' + k;
    for (int num = i; num <= j; num++) {
        string num_str = to_string(num);
        answer += count(num_str.begin(), num_str.end(), k_char);
    }
    return answer;
}