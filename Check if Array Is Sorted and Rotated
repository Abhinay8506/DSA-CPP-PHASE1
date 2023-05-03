class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]>nums[j]){
                count++;
            }
        }
        if(nums[0]<nums[nums.size()-1]){
            count++;
        }
        if(count<=1){
            return true;
        }
        return false;
    }
};
