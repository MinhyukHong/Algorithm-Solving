#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int num = 1;
    while (num <= n) {
        if (n % num == 0) {
            answer.push_back(num);
        }
        num++;
    }
    return answer;
}