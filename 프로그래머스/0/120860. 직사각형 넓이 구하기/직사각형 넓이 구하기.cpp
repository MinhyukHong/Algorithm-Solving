#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < dots.size(); i++) {
        x.push_back(dots[i][0]);
        y.push_back(dots[i][1]);
    }
    int w = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
    int h = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
    
    return w * h;
}