class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int &num : nums){
            mp[num]++;
        }
        
        int minElement = *min_element(nums.begin(),nums.end());
        int maxElement = *max_element(nums.begin(),nums.end());
        
        int j=0;
        for(int i = minElement; i<=maxElement; i++){
            while(mp[i]>0){
                nums[j] = i;
                j++;
                mp[i]--;
            }
        }
        return nums;
    }
};