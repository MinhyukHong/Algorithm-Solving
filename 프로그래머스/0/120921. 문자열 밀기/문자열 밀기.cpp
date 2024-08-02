#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    if (A == B) return 0;
    for (int i = 0; i < A.size(); i++) {
        A = A.substr(A.size() - 1, 1) + A.substr(0, A.size() - 1);
        if (A == B) return i + 1;
    }
    return -1;
}