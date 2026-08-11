class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        sort(s1.begin(), s1.end());

        cout<<s1;
        int left =0,
            right = s1.size()-1;
        
        while(right<s2.size()){
            string sub = s2.substr(left, right-left+1);
            sort(sub.begin(), sub.end());
            if(sub == s1) return true;
            left++;
            right++;
            cout<< sub<<endl;
        }

        return false;
        
    }
};
