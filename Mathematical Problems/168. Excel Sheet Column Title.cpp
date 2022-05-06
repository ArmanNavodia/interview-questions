//problem link: https://leetcode.com/problems/excel-sheet-column-title/ 
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
       while(columnNumber>0){
           columnNumber--;
           int currColumn=columnNumber%26;
           columnNumber/=26;
           ans+=(currColumn+'A');
       }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
