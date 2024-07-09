#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    char temp = '0';
    for(int i = 0; i < my_string.size(); i++) {
        if (i == num1) {
            temp = my_string[i];
            my_string[i] = my_string[num2];
            my_string[num2] = temp;
            }
    }
    answer = my_string;
    
    return answer;
}