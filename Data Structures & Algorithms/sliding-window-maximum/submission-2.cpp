class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;

        int left = 0,
            right = k-1;
        int maxElement = nums[0];

        while(right < nums.size() ){
            for(int i = left; i<=right;i++){
                maxElement = max(maxElement, nums[i]);
            }
            result.push_back(maxElement);
            left++;
            right++;
            if(left<nums.size()) maxElement = nums[left];
        }
        return result;
    }
};
