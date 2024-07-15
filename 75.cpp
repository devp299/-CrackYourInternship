// Sort Colors

// LeetCode Solution: 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int no0 = 0;
        int no1 = 0;
        int no2 = 0;

        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                no0++;
            }
            if(nums[i] == 1){
                no1++;
            }
            if(nums[i] == 2){
                no2++;
            }
        }
        for(int i=1;i<=no0;i++){
            ans.push_back(0);
        }
        for(int i=1;i<=no1;i++){
            ans.push_back(1);
        }
        for(int i=1;i<=no2;i++){
            ans.push_back(2);
        }
        nums = ans;
    }
};