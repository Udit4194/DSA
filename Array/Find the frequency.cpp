// Given an Array Arr of N positive integers and an integer X. Return the frequency of X in the array.

int findFrequency(vector<int> Arr, int X){
    // Your code here
    int count=0;
    for(int i=0;i<Arr.size();i++){
        if(Arr[i]==X){
            count++;
        }
    }
    return count;
    
}
