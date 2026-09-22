class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        int left=0;
        int right=m-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target){
                row=mid;
                break;
            }
            else if(matrix[mid][n-1]<=target)left=mid+1;
            else right=mid-1;
        }
        left=0;
        right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(matrix[row][mid]==target) return true;
            else if(matrix[row][mid]>target) right=mid-1;
            else left=mid+1;
        }
        return false;
    }
};