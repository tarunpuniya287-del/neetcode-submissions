class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=1; i<=n+1; i++){
            if(s.count(i)==0) return i;
        }
        return 1;

    }
};