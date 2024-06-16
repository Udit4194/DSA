// Given an unsorted array arr of size n that contains only non negative integers, find a sub-array (continuous elements) that has sum equal to s. You mainly need to return the left and right indexes(1-based indexing) of that subarray.

// In case of multiple subarrays, return the subarray indexes which come first on moving from left to right. If no such subarray exists return an array consisting of element -1.

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
       long long currentSum=0; 
       int start=0, end;
       
       for(end=0;end<n;end++){
            currentSum+=arr[end];
            
            while(currentSum>s && start<end){
                currentSum-=arr[start];
                start++;
            }
            
            if(currentSum==s){
                return {start+1, end+1};
            }
       }
       return {-1};
    }
};
