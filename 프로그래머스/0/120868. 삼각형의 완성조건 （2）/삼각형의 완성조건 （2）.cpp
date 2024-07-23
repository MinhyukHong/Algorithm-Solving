#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    return (*min_element(sides.begin(), sides.end())) * 2 - 1;
}