class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i = 0; i<nums.size(); i++){
            if(i>0 and nums[i]== nums[i-1]) continue;
            int target = -nums[i];
            int left = i+1, right = nums.size()-1;

            while(right>left){
                if(nums[left]+ nums[right] == target and left != right and left != i and right != i){
                    result.push_back({nums[right], nums[left], nums[i]});
                    while(right > left and nums[left] == nums[left +1]) left++;
                    while(right > left and nums[right] ==  nums[right -1]) right--;
                    left++;
                    right--;
                }else if(nums[left] + nums[right] > target) right--;
                else left++;
            }
            
        }


        return result;
        
    }
};