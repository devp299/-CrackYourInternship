// Remove Duplicates from Sorted Array

// LeetCode Solution: 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(ans.size() == 0){
                ans.push_back(nums[0]);
            }
            if(nums[i] != ans[ans.size() - 1]){
                ans.push_back(nums[i]);
            }
        }   
        nums = ans;
        return nums.size();
    }
};