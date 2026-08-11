class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> wordMap;

        vector<vector<string>> result;

        for(int i =0; i<strs.size(); i++){
            string sortedString = strs[i];
            sort(sortedString.begin(), sortedString.end());
    

            if(wordMap.find(sortedString) == wordMap.end()){
                wordMap[sortedString] = vector<string>{strs[i]};
            }else{
                wordMap[sortedString].push_back(strs[i]);
            }
        }

        for(const auto& vector: wordMap){
            result.push_back(vector.second);
        }
        

        return result;
    }
};
