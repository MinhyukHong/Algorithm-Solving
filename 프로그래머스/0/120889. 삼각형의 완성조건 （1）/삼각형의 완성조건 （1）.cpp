#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max_side = *max_element(sides.begin(), sides.end());
    int other_sides_sum = accumulate(sides.begin(), sides.end(), 0) - max_side;
    if (max_side < other_sides_sum) answer = 1;
    else answer = 2;
    return answer;
}