class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot=0;
        if(nums.size()==1) return 0;
        for(int i=0,j=0;pivot<nums.size();pivot++){
            int lsum=0;
            int rsum=0;
            i=pivot-1;
            j=pivot+1;
            while(i>=0){
                lsum=lsum+nums[i];
                i--;
            }
            while(j<nums.size()){
                rsum=rsum+nums[j];
                j++;
            }

            if(lsum==rsum) return pivot; 
        }

        return -1;
    }
};