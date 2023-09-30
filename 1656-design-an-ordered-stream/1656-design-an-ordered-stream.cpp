class OrderedStream {
public:
    vector<string> st;
    int ptr;
    int size;
    OrderedStream(int n) {
        this->ptr = 1;
        this->size = n;
        this->st.assign(n+1,"NULL"); 
    }
    
    vector<string> insert(int idKey, string value) {
        st[idKey] = value;
        vector<string> ans;
        while(ptr <= size && st[ptr] != "NULL"){
            ans.push_back(st[ptr]);
            ptr++;
        }
        return ans;                                  
                        
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */