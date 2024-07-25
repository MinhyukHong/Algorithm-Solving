#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    vector<set<int>> sets;
    for (const auto& line : lines) {
        set<int> s;
        int start = min(line[0], line[1]);
        int end = max(line[0], line[1]);
        for (int i = start; i < end; i++) {
            s.insert(i);
        }
        sets.push_back(s);   
    }
    set<int> intersection1, intersection2, intersection3;
    set_intersection(sets[0].begin(), sets[0].end(), sets[1].begin(), sets[1].end(), inserter(intersection1, intersection1.begin()));
    set_intersection(sets[0].begin(), sets[0].end(), sets[2].begin(), sets[2].end(), inserter(intersection2, intersection2.begin()));
    set_intersection(sets[1].begin(), sets[1].end(), sets[2].begin(), sets[2].end(), inserter(intersection3, intersection3.begin()));
    
    set<int> union_set;
    union_set.insert(intersection1.begin(), intersection1.end());
    union_set.insert(intersection2.begin(), intersection2.end());
    union_set.insert(intersection3.begin(), intersection3.end());
    
    return union_set.size();
}