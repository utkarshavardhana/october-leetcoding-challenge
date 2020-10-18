class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() <= 10) return {};
        set<string> st;
        set<string> res;
        for(int i=0; i<s.size()-10+1; i++) {
            string t = s.substr(i, 10);
            if(st.count(t))   res.insert(t);
            st.insert(t);
        }
        vector<string> ret;
        for(string str : res)   ret.push_back(str);
        return ret;
    }
};
