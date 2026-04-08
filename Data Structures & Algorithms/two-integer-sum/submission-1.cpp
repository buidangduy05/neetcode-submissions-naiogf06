class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n-1;
        while (i<j){
            if (abs(nums[i]+nums[j])>abs(target)) j--;
            else if (abs(nums[i]+nums[j])<abs(target)) i++;
            else return {i,j};
        }
        return {0,0};
    }
};
