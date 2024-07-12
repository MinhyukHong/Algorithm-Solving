#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int root = static_cast<int>(sqrt(n));
    return (pow(root, 2) == n) ? 1 : 2;
}