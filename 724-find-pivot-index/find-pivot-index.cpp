class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix_sum[nums.size()+1];
        int suffix_sum[nums.size()+1];
        int sum=0;
        prefix_sum[0]=0;
        suffix_sum[nums.size()]=0;
        for(int i=1;i<=nums.size();i++){
            prefix_sum[i] = prefix_sum[i-1]+nums[i-1];
        }

        for(int i=nums.size()-2;i>=0;i--){
            sum=sum+nums[i+1];
            suffix_sum[i+1]=sum;
        }

        for(int i=0; i<nums.size();i++){
            if(prefix_sum[i]==suffix_sum[i+1]) return i;
        }

        return -1;
    }
};