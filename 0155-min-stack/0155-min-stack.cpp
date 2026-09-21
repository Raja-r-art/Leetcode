class MinStack {
    vector<int>v;
    vector<int>vm;
    int t=-1;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        v.push_back(value);
        if(t==-1){
            vm.push_back(value);
        }else{
            vm.push_back(min(value,vm[t]));
        }
        t++;
    }
    
    void pop() {
        v.pop_back();
        vm.pop_back();
        t--;
    }
    
    int top() {
        return v[t];
    }
    
    int getMin() {
        return vm[t];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */