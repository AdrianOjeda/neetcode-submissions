class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        vector<int> result;

        for(int i =0; i<nums.size(); i++){
            myMap[nums[i]]++;
        }

       
        vector<pair<int, int>> map;

        for(const auto& key: myMap){
            map.push_back({key.second, key.first});
        }
        
        sort(map.rbegin(), map.rend());

        for (int i = 0; i< k; i++) {
           
            result.push_back(map[i].second);
            
        }

        return result;

        
    }
};
