class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        for(int i=0;i<nums1.size();i++){
            int max=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int k=j;
                    while(k+1<nums2.size()&&max>=nums2[k+1])k++;
                    if(k+1<nums2.size()) answer.push_back(nums2[k+1]);
                    else answer.push_back(-1);
                }
            }
        }
        return answer;
    }
};