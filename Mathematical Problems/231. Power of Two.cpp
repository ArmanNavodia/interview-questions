//problem link: https://leetcode.com/problems/power-of-two/

class Solution {
public:
    //the idea is that all the power of two digits have only 1 bit set
    //so n&(n-1) will give 0 as answer
    bool isPowerOfTwo(int n) {
         if(n<=0) return false;
        return ((n&(n-1))==0);
    }
};
