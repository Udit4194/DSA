// Given an unsorted array arr[] of size n having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
       int j=0, temp[n];
       
       for(int i=0;i<n;i++){
           if(arr[i]>=0){
               temp[j++]=arr[i];
           }
       }
       for(int i=0;i<n;i++){
           if(arr[i]<0){
               temp[j++]=arr[i];
           }
       }
       for(int i=0;i<n;i++){
           arr[i]=temp[i];
       }
    }
};
