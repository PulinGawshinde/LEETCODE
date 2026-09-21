class Solution {
public:
    int rob(vector<int>& nums) {
        int answer=0;
        int n=nums.size();
        int prev=nums[0];
        for(int i=1;i<n;i++){
            int curr=answer+nums[i];
            answer=max(answer,prev);
            prev=curr;
        }
        return max(answer,prev);
    }
};