class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        int index = binary(nums, target, right, left);
        return index;
    }

private:
    int binary(vector<int> nums, int target, int right, int left) {
        if (left > right) return -1;
        int mid = left + (right - left) / 2;

        

        if (target > nums[mid]) return binary(nums, target, right, mid +1);
        if (target < nums[mid]) return binary(nums, target, mid -1, left);

        return mid;
    }
};
