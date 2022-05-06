//problem link: https://leetcode.com/problems/add-binary/
class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()<b.length()) swap(a,b);//always keep the first string greater
        int n=a.length();
        int m=b.length();
        
        //append the zeros and match the length
        for(int i=0;i<n-m;i++){
            b.insert(0,"0");
        }
        string ans="";
        int c=0;
        //logic to add binary characters
         for(int i=n-1;i>=0;i--){
           if(a[i]=='1' && b[i]=='1'){
               if(c==0){
                   ans+='0';
                   c=1;
               }else{
                   ans+='1';
                   c=1;
               }
           }else if((a[i]=='1'&&b[i]=='0')||(a[i]=='0'&&b[i]=='1')){
               if(c==0){
                   ans+='1';
               }else{
                   ans+='0';
                   c=1;
               }
           }else{
                if(c==0){
                   ans+='0';
               }else{
                   ans+='1';
                    c=0;
               }
           }
        }
        if(c==1) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
