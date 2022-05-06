//problem link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    //reverse the number and then check if it is equal
    //negative number can never be palindrome as reverse will always contain
    //negative sign at last
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int temp=x;
        long long reverse=0;
        while(temp>0){
            int l=temp%10;
            reverse=reverse*10 + l;
                temp/=10;
        }
        if(reverse!=x) return false;
        return true;
    }
};
