#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {
    unordered_map<string, int> num_dict = { {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9} };
    string temp = "";
    long long answer = 0;
    for (char c: numbers) {
        temp += c;
        if (num_dict.find(temp) != num_dict.end()) {
            answer = answer * 10 + num_dict[temp];
            temp = "";
        }
    }
    return answer;
}
