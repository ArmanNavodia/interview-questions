//problem link: https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        //create stack if opening bracket push to stack and if closing bracket
        //pop the top most element with matching bracket if not matching return false
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
            else{
                if(s[i]==')'&&!st.empty()&&st.top()=='(') st.pop();
              else  if(s[i]==']'&&!st.empty()&&st.top()=='[') st.pop();
               else if(s[i]=='}'&&!st.empty()&&st.top()=='{') st.pop();
                else return false;
            }
        }
        if(st.empty())
        return true;
        return false;
    }
};
