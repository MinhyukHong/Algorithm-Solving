#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string number = to_string(num);
    char k_char = to_string(k)[0];
    for (int i = 0; i < number.size(); i++) {
        if (number[i] == k_char) return i + 1;
    }
    return -1;
}