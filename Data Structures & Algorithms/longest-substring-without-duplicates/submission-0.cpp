class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<int> substring;

        int left =0;
        int maxSubstring = 0;
        
        for(int right = 0; right< s.size(); right++){
            while(substring.find(s[right]) != substring.end()){
               substring.erase(s[left]);
                left++; 
            }
            
            substring.insert(s[right]);
            maxSubstring = max(maxSubstring, right-left+1);
        }
        return maxSubstring;
    }
};
