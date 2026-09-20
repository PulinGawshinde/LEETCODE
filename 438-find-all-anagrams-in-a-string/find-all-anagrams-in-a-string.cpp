class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> str(26,0);
        vector<int> window(26,0);
        vector<int> answer;
        if(p.size()>s.size()) return answer;
        int n=p.size();

        for(int i=0;i<n;i++){
            str[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(str==window) answer.push_back(0);

        for(int i=n;i<s.size();i++){
            window[s[i]-'a']++;
            window[s[i-n]-'a']--;
            if(str==window) answer.push_back(i-n+1);
        }
        return answer;
    }
};