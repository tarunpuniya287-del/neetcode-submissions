class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char,int> map;
        int left = 0 , maxlen = 0 , maxfreq = 0;
        for(int right=0; right<n; right++){
            char c = s[right];
            map[c]++;

            maxfreq = max(maxfreq,map[c]);

            while((right-left+1)-maxfreq>k){
                map[s[left]]--;
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
        
    }
};
