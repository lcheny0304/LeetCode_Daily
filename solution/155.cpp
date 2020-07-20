/*
执行用时：40 ms, 在所有 C++ 提交中击败了92.84%的用户
内存消耗：14.7 MB, 在所有 C++ 提交中击败了100.00%的用户
*/
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> a;
    stack<int> mini;
    MinStack() {
    }
    
    void push(int x) {
        a.push(x);
        if(!mini.empty()){
            if(x<=mini.top())
                mini.push(x);
        }
        else
            mini.push(x);
    }
    
    void pop() {
        if(a.top()==mini.top()){
            a.pop();
            mini.pop();
        }
        else{
            a.pop();
        }
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */