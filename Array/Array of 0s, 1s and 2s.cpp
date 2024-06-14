// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

// Dutch National Flag algorithm is used

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int l=0;
        int r=n-1;
        int mid=0;
        
        while(mid<=r){
            switch(a[mid]){
                case 0:
                swap(a[mid], a[l]);
                mid++;
                l++;
                break;
                
                case 1:
                mid++;
                break;
                
                case 2:
                swap(a[mid], a[r]);
                r--;
                break;
            }
        }
    }
    
};
