#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (string str : quiz) {
        string num1 = str.substr(0, str.find(" "));
        str.erase(0, str.find(" ") + 1);

        string op = str.substr(0, str.find(" "));
        str.erase(0, str.find(" ") + 1);

        string num2 = str.substr(0, str.find(" "));
        str.erase(0, str.find("=") + 2);
    
        if (op == "+") {
            if (to_string(stoi(num1) + stoi(num2)) == str) answer.push_back("O");
            else answer.push_back("X");
        }
        else if (op == "-") {
            if (to_string(stoi(num1) - stoi(num2)) == str) answer.push_back("O");
            else answer.push_back("X");
        }
    }
    return answer;
}