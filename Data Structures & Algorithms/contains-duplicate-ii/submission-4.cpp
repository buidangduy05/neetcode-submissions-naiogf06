class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>s;
        int j=0;
        for (int i=0;i<nums.size();i++){
            if (i-j>k) {
                s.erase(nums[j]);
                j++;
            }
            if (s.find(nums[i])!=s.end()) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};