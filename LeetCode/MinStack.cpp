// Link to the problem : https://leetcode.com/problems/min-stack/
// Problem Name : Min Stack

class MinStack {
    stack<int> st;
    priority_queue<int, vector<int>,  greater<int> > minElements;
    int min = INT_MAX;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        minElements.push(x);
    }
    
    void pop() {
        int x = st.top();
        st.pop();
        if(x == minElements.top()) 
            minElements.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minElements.top();
    }
};