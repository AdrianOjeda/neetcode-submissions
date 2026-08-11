class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        

        backtrack(n, 0, 0, "", result);
        return result;


        
    }
private:

    void backtrack(int n, int open, int closed, string current, vector<string>& result){

        if(closed == open and open == n){
            result.push_back(current);
            return;
        }
        if(open < n){
            backtrack(n, open+1, closed, current+"(", result);
        }if(closed < open){
            backtrack(n, open, closed+1, current+")", result);
        }
    }
};
