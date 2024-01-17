class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v(2001,0);
        
        for(int &x : arr){
            v[x+1000]++;
        }
        sort(v.begin(),v.end());
        
        for(int i=1; i<2001; i++){
            if(v[i] != 0 and v[i] == v[i-1]){
                return false;
            }
        }
        return true;
    }
};