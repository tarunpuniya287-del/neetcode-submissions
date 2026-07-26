class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        

        unordered_map<char,int> freq;
        for(char ch: t){
            freq[ch]++;
        }


        int uniquecharcount = freq.size();
        int startIndex = -1;
        int windowstart = 0;
        int windowend = 0;
        int minlen = INT_MAX;
        while(windowend<n){
            char ch = s[windowend];
            if(freq.count(ch)){
                freq[ch]--;

                if(freq[ch]==0){
                    uniquecharcount--;
                }
            }
           
            while(uniquecharcount==0){
                int len = windowend-windowstart+1;
                if(len<minlen){
                    minlen = windowend-windowstart+1;
                    startIndex = windowstart;
                }
                char leftchar = s[windowstart];
                if(freq.count(leftchar)){
                    freq[leftchar]++;

                    if(freq[leftchar]>0){
                        uniquecharcount++;
                    }
                }
                
                windowstart++;

            }
            windowend++;
        }
        if(startIndex==-1){
            return "";
        }else{
            return s.substr(startIndex,minlen);
        }
        
        
    }
};
