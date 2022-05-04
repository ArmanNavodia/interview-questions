//problem link: https://leetcode.com/problems/implement-strstr/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleHash=0;
        int haystackHash=0;
        int n=needle.length();
        bool flag=true;
        if(needle.empty()) return 0;
        if(needle.length()>haystack.length()) return -1;
        
        for(int i=0;i<n;i++){
            needleHash=(needleHash+(needle[i]-'a'));
        }
        
        for(int i=0;i<n;i++){
            haystackHash=(haystackHash+(haystack[i]-'a'));
        }
        if(haystackHash==needleHash){
            for(int i=0;i<n;i++){
                if(haystack[i]!=needle[i]){
                    flag=false;
                    break;
            }
                
            }                
            if(flag) return 0;
        }
        
        
        for(int i=n;i<haystack.length();i++){
            flag=true;
            haystackHash=(haystackHash+(haystack[i]-'a')-(haystack[i-n]-'a'));
            
        if(haystackHash==needleHash){
            for(int j=0;j<n;j++){
                if(haystack[j+i-n+1]!=needle[j]){
                    cout<<"comparing: "<< haystack[j+i-n+1] << " with "<<needle[j];
                    flag=false;
                    break;
            }
                
            }                
            if(flag) return i-n+1;
        }
        }
        return -1;
    }
};
