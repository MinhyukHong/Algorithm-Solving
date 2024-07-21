#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    istringstream ss(polynomial);
    string term;
    int x_term = 0;
    int constant_term = 0;
    
    while (ss >> term) {
        if (term.find('x') != string::npos) {
            if (term == "x") x_term += 1;
            else x_term += stoi(term.substr(0, term.find('x')));
        }
        else if (term != "+") constant_term += stoi(term);
    }
    
    string result;
    
    if (x_term > 0) {
        if (x_term == 1) result += "x";
        else result += to_string(x_term) + "x";
    }
    
    if (constant_term > 0) {
        if (!result.empty()) result += " + ";
        result += to_string(constant_term);
    }
    
    if (result.empty()) {
        return 0;
    }
    return result;
}