class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum=0;
        int subarr=0;
        unordered_map<int,int> map;
        map[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int remove=presum-k;
            subarr=subarr+map[remove];
            map[presum]=map[presum]+1;
        }

        return subarr;
    }
};