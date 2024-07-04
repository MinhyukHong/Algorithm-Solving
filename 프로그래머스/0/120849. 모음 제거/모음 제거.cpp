#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string vowels = "aeiou";
    
    my_string.erase(remove_if(my_string.begin(), my_string.end(), [&vowels](char c) {return vowels.find(c) != string::npos; }), my_string.end());
    
    return my_string;
}

// 반복문으로 구현
/* string solution(string my_string) {
    string vowels = "aeiou";
    string answer ="";
    for (int i = 0; i < my_string.size(); i++) {
        bool is_vowel = false;
        for (int j = 0; j < vowels.size(); j++) {
            if (my_string[i] == vowels[j]) {
                is_vowel = true;
                break;
            }
        }
        if (!is_vowel) {
            answer += my_string[i];
        }
    }
    return answer;
} */