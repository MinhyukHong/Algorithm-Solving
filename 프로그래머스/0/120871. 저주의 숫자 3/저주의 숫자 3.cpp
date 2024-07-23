#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = 0;
    int number = 0;
    while (count < n) {
        number += 1;
        string numStr = to_string(number);
        if (numStr.find('3') != string::npos || number % 3 == 0) continue;
        count += 1;
    }
    return number;
}