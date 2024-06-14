// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

// Note: Return an array that contains 2 elements the first one will be a minimum element and the second will be a maximum of an array.
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        int min=100000000, max=-100000000;
        
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
            
            if(a[i]<min){
                min=a[i];
            }
        }
        
        return {min, max};
    }
};
