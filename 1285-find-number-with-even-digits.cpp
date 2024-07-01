#include <string>
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto num:nums){
            int digits=0;
            while(num>0){
                num/=10;
                digits++;
            }
            if(digits%2==0){
            count++;
        }
        }
       
        return count;
    }
};