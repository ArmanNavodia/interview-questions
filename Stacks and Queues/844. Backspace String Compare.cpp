//problem link: https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //using two pointer approach
        // take two pointer start traversing the string by the first pointer i. if it is pointing to # then decrease the second pointer x. Make sure that x is always greater than or equals 0. And if it is not pointing to # then increase the second pointer x and store the element at xth position. s[x]=s[i] continue the process until the string ends.
        
        int x=0,y=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                x--;
                x=max(0,x);
            }else{
                s[x++]=s[i];
            }
        }
          for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                y--;
                y=max(0,y);
            }else{
                t[y++]=t[i];
            }
        }
        if(x!=y) return false;
         for(int i=0; i<x; i++){
                if(s[i] != t[i]) return false;
            }
            return true;
    }
};
