class MinStack {
public:
   
    vector<pair<int , int>> p;

    MinStack() {
        
    }
    
    void push(int value) {

        if(p.empty())
        {
          p.push_back({value , value});  
          return;
        }

        auto top = p.back();
        int mini = min (value , top.second);
        p.push_back({value , mini});
        
    }
    
    void pop() {
        p.pop_back();
        
    }
    
    int top() {
        return p.back().first;
        
    }
    
    int getMin() {
        return p.back().second;
        
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