//problem link: https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int maxl=0;
        int sum=0;
       unordered_map<int,int> mp; //cf , index
       mp[A[0]]=0;
       for(int i=0;i<n;i++){
          sum+=A[i];
          if (A[i] == 0 && maxl == 0)
            maxl = 1;
        if (sum == 0)
            maxl = i + 1;

          auto it= mp.find(sum);
           if(it!=mp.end()){
               maxl=max(maxl,i-it->second);
           }else
           mp[sum]=i;
       }
       return maxl;
    }
};
