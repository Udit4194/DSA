// Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        int size=(r-l)+1;
        int temp[size];
        int i=l, j=m+1, k=0;
         
         while(i<=m && j<=r){
             if(arr[i]<=arr[j]){
                 temp[k++]=arr[i++];
             }
             else{
                 temp[k++]=arr[j++];
             }
         }
         
         while(i<=m){
             temp[k++]=arr[i++];
         }
         
         while(j<=r){
             temp[k++]=arr[j++];
         }
         
        for(int s=0;s<k;s++){
            arr[s+l]=temp[s];
        }
         
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
    }
};
