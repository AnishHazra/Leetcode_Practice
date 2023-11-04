class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int fallOut = 0;
        for(auto l: left)
            fallOut = max(fallOut,l);
        for(auto r: right)
            fallOut =  max(fallOut,n-r);
        return fallOut;
    }
};