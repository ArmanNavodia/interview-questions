//problem link: https://practice.geeksforgeeks.org/problems/min-sum-formed-by-digits3551/1/

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        long long num1=0;
        long long num2=0;
        sort(arr,arr+n);
      for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            num1 = num1 * 10 + arr[i];
        else
            num2 = num2 * 10 + arr[i];
    }
    return num2 + num1;
    }
};
