class Solution {
private:
    int binary(vector<int> nums, int target, int right, int left) {
        if (left > right) return -1;
        int mid = left + (right - left) / 2;

        if (target > nums[mid]) return binary(nums, target, right, mid +1);
        if (target < nums[mid]) return binary(nums, target, mid -1, left);

        return mid;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for(int i = 0; i <matrix.size(); i++){
            int left = 0;
            int right = matrix[i].size() - 1;

            int index = binary(matrix[i], target, right, left);
            if(index != -1) return true;
            
        }
        return false;
    }
};
