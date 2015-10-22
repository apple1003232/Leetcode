class MinStack {
private:
    stack<int> s1;
    stack<int> min;
public:
    void push(int x) {
        s1.push(x);
        
        if(min.size()==0 || x<= min.top() ){
            min.push(x);
        }
        
    }

    void pop() {
        if(s1.top()==min.top())
            min.pop();
        s1.pop();
        
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return min.top();
    }
};