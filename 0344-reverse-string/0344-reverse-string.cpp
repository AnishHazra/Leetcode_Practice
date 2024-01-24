class Solution {
public:
    void solve(vector<char>& s, int i, int j){
        //base case
        if(i>j){
            return;
        }
        //logic
        swap(s[i],s[j]);
        i++;
        j--;
        return solve(s,i,j);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        return solve(s,i,j);
    }
};