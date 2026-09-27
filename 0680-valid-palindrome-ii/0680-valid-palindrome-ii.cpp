class Solution {
public:
    bool palindrom_helper(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return palindrom_helper(i+1,j,s) || palindrom_helper(i,j-1,s);
            }
            else{
                i++;
                j--;
            }
           
        }
         return true;
    }
};