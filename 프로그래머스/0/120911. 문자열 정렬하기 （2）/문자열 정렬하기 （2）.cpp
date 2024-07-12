#include <string>
#include <vector>
#include <algorithm>
#include <boost/algorithm/string.hpp>

using namespace std;

string solution(string my_string) {
    // transform(my_string.begin(), my_string.end(), my_string.begin(), ::tolower);
    boost::algorithm::to_lower(my_string);
    sort(my_string.begin(), my_string.end());
    return my_string;
}