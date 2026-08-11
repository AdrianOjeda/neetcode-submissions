class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> myMap;
        


        for(int i = 0; i< strs.size(); i++){
            string copy = strs[i];
            sort(copy.begin(), copy.end());

            if(myMap.find(copy) == myMap.end()){
                myMap[copy];
            }
        }
        vector<vector<string>> result(myMap.size());

        for(int i =0; i< strs.size(); i++){
            string copy = strs[i];
            sort(copy.begin(), copy.end());

            myMap[copy].push_back(strs[i]);
        }


        
        cout<<myMap.size()<<endl;
        int counter =0;
        for(auto const& elements: myMap){
            cout<<elements.first<<" ";
            cout<<elements.second.size()<<" ";
            for(int i = 0; i<elements.second.size(); i++){
                cout<<elements.second[i]<<" ";
                result[counter].push_back(elements.second[i]);
            }
            counter++;
            cout<<endl;
        }
        return result;
    }
};
