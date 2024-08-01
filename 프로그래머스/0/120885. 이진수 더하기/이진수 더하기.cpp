#include <string>
#include <bitset>

using namespace std;

string solution(string bin1, string bin2) {
    // 최대 32비트까지 처리한다고 가정
    bitset<32> a(bin1);
    bitset<32> b(bin2);
    
    // a와 b를 더한 값을 저장할 비트셋
    bitset<32> result = a.to_ulong() + b.to_ulong();
    
    // 결과 비트셋을 문자열로 변환하고 앞의 불필요한 '0'을 제거
    string answer = result.to_string();
    answer.erase(0, answer.find_first_not_of('0'));
    
    // 만약 모두 0이라면, 결과 문자열이 빈 문자열이 되므로 이를 "0"으로 설정
    if (answer.empty()) {
        answer = "0";
    }
    
    return answer;
}