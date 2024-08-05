#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int x = common[0];
    int y = common[1];
    int z = common[2];
    if (y - x == z - y) answer = common.back() + (y - x);
    else if (y / x == z / y) answer = common.back() * (y / x);
    return answer;
}