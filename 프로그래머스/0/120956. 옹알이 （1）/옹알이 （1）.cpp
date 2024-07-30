#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<std::string> babbling) {
    int cnt = 0;
    std::vector<std::string> words = {"aya", "ye", "woo", "ma"};
    
    for (auto &i : babbling) {
        for (auto &j : words) {
            size_t pos;
            while ((pos = i.find(j)) != std::string::npos) {
                i.replace(pos, j.length(), " ");
            }
        }
        if (i.find_first_not_of(" ") == std::string::npos) {
            cnt++;
        }
    }
    return cnt;
}