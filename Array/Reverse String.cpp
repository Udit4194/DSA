// You are given a string s. You need to reverse the string.
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n=str.length();
        
        for(int i=0;i<n/2;++i){
            swap(str[i], str[n-1-i]);
        }
        
        return str;
    }
};
