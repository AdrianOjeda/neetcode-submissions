class MinStack {
private:
    stack<int> myStack;
    stack<int> min;
public:
    MinStack() {}
    
    void push(int val) {
        if(myStack.empty()){
            myStack.push(val);
            min.push(val);
        }else{
            if(val< min.top()){
                min.push(val);
            }else{
                min.push(min.top());
            }
            myStack.push(val);
        }

           
    }
    
    void pop() {
        myStack.pop();
        min.pop();
        
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return min.top();
    }
};
