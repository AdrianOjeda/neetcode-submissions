class Solution {
public:
    bool isPalindrome(string s) {
        
        string resultingString;
        for(int i = 0; i< s.size(); i++){
            if(isalpha(s[i]) or isdigit(s[i])){
                resultingString.push_back(tolower(s[i]));
            }
        }
        cout<<resultingString;
        int left = 0;
        int right = resultingString.size()-1;
        
        for(int i = 0; i<resultingString.size()/2; i++){
            if(resultingString[left] == resultingString[right]){
                left++;
                right--;
            }else return false;

        }

        return true;
    }
};
