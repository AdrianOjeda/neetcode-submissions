class Solution {

private:
 void dfs(vector<vector<int>>& result, int i, vector<int>& nums, vector<int>& current){
    if(i >= nums.size()){
        result.push_back(current);
        return;
    }
    current.push_back(nums[i]);
    dfs(result, i+1, nums, current);

    current.pop_back();
    dfs(result, i+1, nums, current);


}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> current;
        int i = 0;
        dfs(result, i, nums, current);

        return result;
    }
};
