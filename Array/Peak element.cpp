// Given an 0-indexed array of integers arr[] of size n, find its peak element and return it's index. An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).

// Note: The output will be 1 if the index returned by your function is correct; otherwise, it will be 0.
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
      if(n==1)
       return 0;
      
      for(int i=0;i<n;i++){
          if(i==0){
              if(arr[i]>=arr[i+1])
              return i;
          }
          else if(i==n-1){
              if(arr[i]>=arr[i-1])
              return i;
          }
          
          else{
              if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
              return i;
          }
      }
      
      return -1;
    }
};
