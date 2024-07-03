#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 1;
    while (true) {
        if (tgamma(i + 1) > n) return i - 1;
        i++;
    }
}
