class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = -1;
        for(int i=0; i<matrix.size(); i++) {
            int n = matrix[i].size();
            if(n == 0)  return false;
            if(target >= matrix[i][0] and target <= matrix[i][n-1]) {
                row = i;
                break;
            }
        }
        if(row == -1)   return false;
        int lo = 0, hi = matrix[row].size()-1;
        int mid;
        while(lo<hi) {
            mid = lo + (hi - lo) / 2;
            if(target < matrix[row][mid]) {
                hi = mid;
            } else if(target > matrix[row][mid]) {
                lo = mid + 1;
            } else {
                return true;
            }
        }
        if(matrix[row][lo] == target or matrix[row][hi] == target)  return true;
        return false;
    }
};
