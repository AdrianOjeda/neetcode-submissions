class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        if(s.size()!= t.size()) return false;

        for(int i =0; i<s.size(); i++){
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        
        for(int i =0; i< sMap.size(); i++){
            if(sMap[i]!=tMap[i]) return false;
        }
        return true;
        
    }
};
