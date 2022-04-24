class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     int len = nums.size();
    //     for(int i=0; i < len; i++){
    //         for(int j = i+1; j < len; j++){
    //             if((target - nums[i]) == nums[j]){
    //                 return {i, j};
    //             }
    //         }
    //     }
    //     return {-1,-1};
    // }
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map <int, int> hash;
        for (int i = 0 ; i<nums.size(); i++){
            
            if(hash.find(target - nums[i]) == hash.end()){
                hash[nums[i]] = i;
            }else{
                return {hash[target - nums[i]], i};
            }
        }
        return {-1,-1};
    }
};