class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        int maxCount = 0,
            left = 0,
            right = 0,
            result =0;
        
        while(right <s.size()){
            count[s[right]-'A']++;
            maxCount = max(maxCount, count[s[right]-'A']);
            if(right-left+1 - maxCount > k){
                count[s[left]-'A']--;
                left++;
            }

            result = max(right-left+1, result);
            right++;
        }

        return result;


    }
};
