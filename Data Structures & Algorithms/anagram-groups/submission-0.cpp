class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string , vector<string>> map;
        int n = str.size();        
        for(int i=0; i<n; i++){
            string temp = str[i];
            sort(temp.begin(),temp.end());
            map[temp].push_back(str[i]);
        }
        vector<vector<string>> ans;
        for(auto&pair:map){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
