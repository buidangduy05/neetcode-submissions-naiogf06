class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> apt;
        map<string,vector<string>>mp;
        for (string s:strs){
            vector<int>dem(26,0);
            for (char c:s) dem[c-'a']++;
            string k = to_string(dem[0]);
            for (int i=1;i<26;i++){
                k += "," + to_string(dem[i]);
            }
            mp[k].push_back(s);
        }
        for (auto s:mp){
            apt.push_back(s.second);
        }
        return apt;
    }
};
