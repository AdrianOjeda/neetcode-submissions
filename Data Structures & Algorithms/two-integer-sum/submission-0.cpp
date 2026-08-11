class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        int difference = 0;
        vector<int> result;

        for(int i = 0; i< nums.size(); i++){
            difference = target - nums[i];
            if(myMap.find(difference) != myMap.end()){

                return {myMap[difference], i};
                
            }else{
                myMap.insert({nums[i], i});
                
            }
        }
        return result;
    }
};
