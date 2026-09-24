class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp ;
        vector<vector<string>> answer ; 
        int row=0;

        for(int i = 0 ; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            if(mp.find(s)!= mp.end()){
                answer[mp[s]].push_back(strs[i]);
            }
            else{
                mp[s] = row;
                answer.push_back({strs[i]});
                row++;
            }
        }
        return answer;
    }
};