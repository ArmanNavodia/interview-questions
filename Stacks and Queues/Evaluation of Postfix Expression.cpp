//problem link: https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1/

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
       stack<int> st;//for storing numbers
       for(int i=0;i<s.length();i++){
           if(isdigit(s[i])) st.push(s[i]-'0');
           else{
               int a=st.top();
               st.pop();
               int b=st.top();
               st.pop();
               
               switch(s[i]){
                   case '+': st.push((a+b));
                   break;
                   
                   case '-': st.push((b-a));
                   break;
                   
                   case '/': st.push((b/a));
                   break;
                   
                   case '*': st.push((a*b));
                   break;
               }
           }
       }
       return st.top();
    }
};
