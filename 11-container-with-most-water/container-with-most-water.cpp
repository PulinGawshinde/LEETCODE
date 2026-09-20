class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0,n=height.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int area=0;
            area=min(height[left],height[right])*(right-left);
            maxi=max(area,maxi);
            if(height[left]<height[right])left++;
            else right--;
        }
        return maxi;
    }
};