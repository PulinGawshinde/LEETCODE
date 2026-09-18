class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int total=0;
    int j=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            j=i;
            while(j<nums.size()){
                sum=sum+nums[j];
                if(sum==k) total++;
                j++;
            }
        }
        return total;
    }
};