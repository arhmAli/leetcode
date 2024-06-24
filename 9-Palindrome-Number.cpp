#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        string intStr=str;
        reverse(intStr.begin(),intStr.end());
        return str==intStr;
    }
};