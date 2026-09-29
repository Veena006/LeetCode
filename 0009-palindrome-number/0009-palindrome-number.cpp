class Solution {
public:
    bool isPalindrome(int x) {
        std::string s=std::to_string(x);
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};