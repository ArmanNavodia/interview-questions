//problem link: https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1/

bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0;
    int j=1;
    while(j<size){
        int diff=arr[j]-arr[i];
        if(diff==n&& i!=j) return true;
        else if(diff>n) i++;
        else j++;
    }
    return false;
    
}
