//problem link: https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        s.insert(n);
        while(n!=1){
            int temp=n;
            n=0;
            while(temp){
                int p=temp%10;
                n+=p*p;
                temp/=10;
            }
            if(s.count(n)) return false;
            s.insert(n);
        }
        return true;
    }
};
