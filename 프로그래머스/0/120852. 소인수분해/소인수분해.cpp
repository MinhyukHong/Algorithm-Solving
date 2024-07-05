#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            answer.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
        else i++;
    }
    if (n > 1) {
        answer.push_back(n);
    }
    return answer;
}