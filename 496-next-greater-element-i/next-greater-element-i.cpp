class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        vector<int> next(nums2.size());
        stack<int> st;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(st.size()>0&&nums2[i]>=st.top()){
                st.pop();
            }
            if(st.empty()) next[i]=-1;
            else next[i]=st.top();
            st.push(nums2[i]);
        }

        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                 answer.push_back(next[j]);
                 break;
                }
            }
        }
        return answer;
    }
};