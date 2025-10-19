class Solution {
public:
    int majorityElement(vector<int>& nums) {
         map<int, int> mp;
         for(auto x:nums){
            mp[x]++;
         }   
         int ans = 0;
         int n = nums.size();
         for(auto x:mp){
            if(x.second > n/2){
                ans = x.first;
            }
         }
         return ans;
    }
};
