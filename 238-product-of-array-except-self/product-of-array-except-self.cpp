class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(),0);
        int product=1;
        int count=0;
        int index=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                product=product*nums[i];
            }
            else{
                count++; index=i;
            }
        }

        if(count>=2) return answer;
        else if(count==1){
            answer[index]=product;
        }
        else{
            for(int i=0;i<nums.size();i++){
                answer[i]=product/nums[i];
            }
        }
        return answer;
    }
};