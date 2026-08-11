class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;

        for(int i = 0; i< nums.size(); i++){
            int toTarget = target - nums[i];
            if(myMap.find(toTarget) == myMap.end()){
                myMap.insert({nums[i], i});

            }else{
                int index = myMap.at(toTarget);
                return {index, i};

            }
        }
        return {};
    }
};
