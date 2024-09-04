class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m;
        unordered_set <char> st;
        if(s.size()!=t.size()) return false;
        else{
            for (int i=0;i<s.size();i++){
                if((m.find(s[i]) != m.end() && m[s[i]] != t[i] ) || (st.find(t[i]) != st.end() && m.find(s[i]) == m.end())) return false;
                else m[s[i]] = t[i];
                st.insert(m[s[i]]);

            }
        }
       
return true;
        
    }
        
};