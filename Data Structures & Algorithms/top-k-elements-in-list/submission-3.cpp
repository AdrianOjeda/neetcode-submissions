class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> myMap;
        vector<int> result;

        for(int i =0; i<nums.size(); i++){
            myMap[nums[i]]++;
        }

        for(auto const& num: myMap){
            cout<<num.first<<" "<<num.second<<endl;

        }
        vector<pair<int, int>> map(myMap.begin(), myMap.end());

        sort(map.begin(), map.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second; 
        });
        
        
        for (int i = map.size() - 1; i >= 0 && result.size() < k; i--) {
           
            result.push_back(map[i].first);
            
        }

        return result;

        
    }
};
