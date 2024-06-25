
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
     string filtered;
     string reversed;
     for(char c:s){
        if(isalnum(c)){
            filtered+=tolower(c);
        }
     }
     reversed=string(filtered.rbegin(),filtered.rend());
     return filtered==reversed;
    }
};