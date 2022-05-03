    //problem link: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/
    class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
   sort(a.begin(),a.end());
   long long mindiff=INT_MAX;
   for(int i=0;i<n-m+1;i++){
       mindiff=min(mindiff,(long long) max((int) (a[i+m-1]-a[i]),0));
   }
    return mindiff;
    }   
};
