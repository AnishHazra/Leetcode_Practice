class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    int peekElement = -1;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()){
            peekElement = x;
        }
        input.push(x); //push new element in input stack
    }
    
    //amortaized O(1)
    int pop() {
        if(output.empty()){
            //input ke element ko output stack mai daalo
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            
        }
        int ans = output.top(); //O(1)
        output.pop();
        return ans;
    }
    
    int peek() {
        if(output.empty()){
            return peekElement;
        }
        return output.top();
    }
    
    bool empty() {
        if(input.empty() and output.empty())
            return true;
        
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */