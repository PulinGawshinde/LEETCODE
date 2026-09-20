class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;

        vector<int> need(26,0);
        vector<int> window(26,0);
        int n=s1.size();

        for(int i=0;i<n;i++){
            need[s1[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            window[s2[i]-'a']++;
        }
         if(need==window) return true;
         
         for(int i=n;i<s2.size();i++){
            window[s2[i]-'a']++;
            window[s2[i-n]-'a']--;

            if(need==window) return true;
        }   
        return false;
    }
};