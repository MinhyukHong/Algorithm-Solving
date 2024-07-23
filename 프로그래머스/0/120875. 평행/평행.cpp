#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int x1 = dots[0][0], y1 = dots[0][1];
    int x2 = dots[1][0], y2 = dots[1][1];
    int x3 = dots[2][0], y3 = dots[2][1];
    int x4 = dots[3][0], y4 = dots[3][1];
    
    bool answer1 = ((y1 - y2) * (x3 - x4)) == ((y3 - y4) * (x1 - x2));
    bool answer2 = ((y1 - y3) * (x2 - x4)) == ((y2 - y4) * (x1 - x3));
    bool answer3 = ((y1 - y4) * (x2 - x3)) == ((y2 - y3) * (x1 - x4));
    if (answer1 || answer2 || answer3) return 1;
    else return 0;
}