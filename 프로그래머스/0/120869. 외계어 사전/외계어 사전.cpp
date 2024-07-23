#include <vector>
#include <unordered_set>
#include <string>
#include <iostream>

using namespace std;

// unordered_set<char>로 변환하는 함수
unordered_set<char> createSet(const vector<string> &spell) {
    unordered_set<char> spellSet;
    for (const auto &s : spell) {
        for (const char &c : s) {
            spellSet.insert(c);
        }
    }
    return spellSet;
}

int solution(vector<string> spell, vector<string> dic) {
    // spell을 unordered_set<char>로 변환
    unordered_set<char> spellSet = createSet(spell);

    for (const string &word : dic) {
        unordered_set<char> wordSet(word.begin(), word.end());
        bool isSubset = true;
        for (const char &c : spellSet) {
            if (wordSet.find(c) == wordSet.end()) {
                isSubset = false;
                break;
            }
        }
        if (isSubset) {
            return 1;
        }
    }
    return 2;
}