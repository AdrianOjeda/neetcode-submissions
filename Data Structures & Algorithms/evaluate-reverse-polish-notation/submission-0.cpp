class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> myStack;

        for(int i =0; i< tokens.size(); i++){
            
            if(tokens[i] != "+" and tokens[i] != "-" and tokens[i] != "*" and tokens[i] != "/" ){
                myStack.push(tokens[i]);
            }else{
                if(tokens[i] == "+"){
                    int val1 = stoi(myStack.top());
                    myStack.pop();
                    int val2 = stoi(myStack.top());
                    myStack.pop();

                    
                    int result = val1 + val2;

                    
                    myStack.push(to_string(result));

                }else if(tokens[i] == "-"){
                    int val1 = stoi(myStack.top());
                    myStack.pop();
                    int val2 = stoi(myStack.top());
                    myStack.pop();

                    val2 -= val1;
                    myStack.push(to_string(val2));

                }else if(tokens[i] == "*"){
                    int val1 = stoi(myStack.top());
                    myStack.pop();
                    int val2 = stoi(myStack.top());
                    myStack.pop();

                    val2 *= val1;
                    myStack.push(to_string(val2));

                }else if(tokens[i] == "/"){
                    int val1 = stoi(myStack.top());
                    myStack.pop();
                    int val2 = stoi(myStack.top());
                    myStack.pop();

                    val2 /= val1;
                    myStack.push(to_string(val2));
                }
            }
        }
        return stoi(myStack.top());
    }
};
