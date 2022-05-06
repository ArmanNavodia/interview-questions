//problem link: https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        bool negative=false;
        if(x<0){
           x= abs(x);
            negative=true;
        }
        int reverse=0;
        while(x>0){
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10) return 0;
            int l=x%10;
            reverse=reverse*10 + l;
            x/=10;
        }
        if(negative) return (-reverse);
            return reverse;
    }
};
