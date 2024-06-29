class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int streak=0;
        int ans=0;
        for (int i=0;i<nums.size();i++){
           if(nums[i]==1){
               streak++;
               ans=max(ans,streak);
           }
            else{
                streak=0;
            }
       } 
        return ans;
    }
};