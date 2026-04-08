class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<pair<int,int>>arr;
        for (int t=0;t<n;t++) arr.push_back({nums[t],t});
        sort(arr.begin(),arr.end());
        int i = 0, j = n-1;
        while (i<j){
            int sum=arr[i].first+arr[j].first;
            if (sum==target) return {min(arr[i].second, arr[j].second),max(arr[i].second, arr[j].second)};
            else if (sum>target) j--;
            else i++;
        }
        return {0,0};
    }
};
