#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    
    vector<pair<double, int>> avg;
    for (int i = 0; i < score.size(); i++) {
        avg.push_back({(score[i][0] + score[i][1]) / 2.0, i});
    }
    
    sort(avg.begin(), avg.end(), [](pair<double, int>& a, pair<double, int>& b) {
        return a.first > b.first;
    });
    
    vector<int> rank(score.size());
    int current_rank = 1;
    for (int i = 0; i < avg.size(); i++) {
        if (i > 0 && avg[i].first < avg[i - 1].first) {
            current_rank = i + 1;
        }
        rank[avg[i].second] = current_rank;
    }
    return rank;
}