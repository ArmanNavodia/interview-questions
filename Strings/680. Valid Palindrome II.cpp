//problem link: https://leetcode.com/problems/valid-palindrome-ii/
class Solution {
public:
    //check after deleting mismatch character if it can be palindrome
    bool isPalindrome(string s,int i,int j){
         while(i<j){
             //if first and last character are same check the other character
            if(s[i]==s[j]) {
                i++;
                j--;
            }else{
                return false;//if chararcter are not same return false
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
           if(s.length()<=2)
        {
            return true;    
        }
        while(i<j){
            if(s[i]==s[j]) {
                i++;
                j--;
            }else{
                //when mismatch occurs check the remaining string for palindrome
                //after deleting one character
                //if remaining is palindrome return true else return false;
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
        }
        return true;
    }
};
