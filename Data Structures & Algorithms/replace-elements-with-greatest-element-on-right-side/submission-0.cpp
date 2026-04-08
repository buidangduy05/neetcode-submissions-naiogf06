class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>a(n);
        int res=-1;
        for (int i=n-1;i>=0;i--){
            a[i]=res;   
            res=max(res,arr[i]);
        }
        return a;
    }
};