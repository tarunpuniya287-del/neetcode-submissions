class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i=0; i<n; i++){
           int need = nums[i];
           if(map.find(need)!=map.end()) {
            return true;
           }
           map[need]=i;
        }
        return false;
        

        
    }
};