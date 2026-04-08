using ll = long long;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>a(nums.size()-s.size());
        for (int i=1,j=0;i<=nums.size();i++){
            if (!s.count(i)) a[j++]=i;
        }
        return a;
    }
};