class CustomStack {
public:
    vector<int> st;
    int maxSize;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    void push(int x) {
        if(st.size() < maxSize)
            st.push_back(x);
    }
    int pop() {
        if(st.size() != 0){
            int element = st[st.size() - 1];
            st.pop_back();
            return element;    
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<st.size();i++){
            if(k == 0)
                break;
            else{
                st[i] = st[i] + val;
                k--;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */