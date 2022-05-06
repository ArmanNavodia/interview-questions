//problem link: https://practice.geeksforgeeks.org/problems/permutations-in-array1747/1/

class Solution {
  public:
    bool isPossible(long long a[], long long b[], long long n, long long k) {
        //sort in increasing order
        sort(a,a+n);
        //sort in decreasing order
        sort(b,b+n,greater<int>());
        
        //the idea is to add minimum element with maximum element of second array
        //so that sum is greater than k
        for(int i=0;i<n;i++){
            if(a[i]+b[i]<k) return false;
        }
        return true;
    }
};
