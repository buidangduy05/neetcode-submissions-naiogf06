class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n=words.size(),i=0;
        vector<string>res;
        while (i<n){
            vector<string>t={words[i]};
            int cnt=words[i].size();
            i++;
            while (i<n && cnt+words[i].size()+1<=maxWidth){
                cnt += words[i].size()+1;
                t.push_back(words[i]);
                i++;
            }
            if (i==n || t.size()==1){
                string s = t[0]; 
                for (int j=1;j<t.size();j++) s += " " + t[j];
                string rt(maxWidth-s.length(),' ');
                res.push_back(s+rt);
                continue;
            }
            int total = cnt-(t.size()-1);
            int sum = maxWidth-total;
            int diff = sum / (t.size()-1);
            int rem = sum % (t.size()-1);
            string lt;
            for (int j=0;j<t.size()-1;j++){
                lt+=t[j];
                int tre=diff+(j<rem?1:0);
                lt+=string(tre,' ');
            }
            lt+=t.back();
            res.push_back(lt);
        }
        return res;
    }
};