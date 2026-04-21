class Solution {
public:
    string decodeString(string &s) {
        string res="";
        for (int i=0;i<s.length();i++){
            if (s[i]!=']') res.push_back(s[i]);
            else{
                string tmp="";
                while(!res.empty() && res.back()!='['){
                    tmp.push_back(res.back());
                    res.pop_back();
                }
                reverse(tmp.begin(),tmp.end());
                res.pop_back();
                string t="";
                while(!res.empty() && isdigit(res.back())){
                    t.push_back(res.back());
                    res.pop_back();
                }
                reverse(t.begin(),t.end());
                int op=stoi(t);
                while(op--) res.append(tmp);
            }
        }
        return res;
    }       
};