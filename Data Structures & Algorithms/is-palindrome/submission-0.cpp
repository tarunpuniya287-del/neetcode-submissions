class Solution {
public:
    bool isAlphanum(char ch){
        if((ch>='0' && ch<='9') ||
        (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = n-1;
        while(start<end){
            if(!isAlphanum(s[start])){
                start++;
                continue;
            }
            if(!isAlphanum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
        
    }
};
