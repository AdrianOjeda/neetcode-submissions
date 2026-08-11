class Solution {
public:
    bool isValid(string s) {

        stack<char> myStack;
        unordered_map<char, char> pairs{
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(int i =0; i<s.size(); i++){
            if(pairs.find(s[i]) != pairs.end()){
                if(myStack.empty()) return false;
                if(myStack.top()!= pairs[s[i]]) return false;
                
                myStack.pop();


            }else myStack.push(s[i]);
        }
        
        return myStack.empty();
        
    }
};
