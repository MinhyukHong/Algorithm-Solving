#include <string>
#include <vector>
#include <cmath>

using namespace std;

double factorial(int number) {
    if (number == 0) {
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }
}

int solution(int balls, int share) {
    double answer = factorial(balls) / (factorial(balls - share) * factorial(share));
    return round(answer);
}