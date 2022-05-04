//problem link: https://leetcode.com/problems/longest-common-prefix/ 
class Solution {
public:
    //assume first string as prefix
    //match the prefix string with all the other string
    //find the common starting part in both the string
    string findpre(string res,string match){
        if(res.size() > match.size()) swap(res,match);
        string ans="";
        for(int i=0 ;i<res.size();i++){
            if(res[i]!=match[i]) break;
            ans+=(char) res[i];
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(int i=1;i<strs.size();i++){
           res=findpre(res,strs[i]);
            }
        
    return res;
    }
};
