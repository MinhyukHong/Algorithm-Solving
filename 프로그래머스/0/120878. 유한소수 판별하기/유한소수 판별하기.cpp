#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    b = b / __gcd(a, b);
    for (int i = 2; i <= 5; i++) {
        if (i == 3) continue;
        while (!(b % i)) b /= i;
    }
    if (b == 1) return 1;
    else return 2;
}