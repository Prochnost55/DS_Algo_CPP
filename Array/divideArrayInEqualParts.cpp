class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size() % 2 != 0){
            return false;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i=i+2){
            if(nums[i]!=nums[i+1]){
                return false;
                break;
            }
        }
        return true;
    }
};