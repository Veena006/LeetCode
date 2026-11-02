class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int map_s[256]={0};
        int map_t[256]={0};
        for(int i=0;i<s.length();++i){
            char c_s=s[i];
            char c_t=t[i];

            if(map_s[c_s] != map_t[c_t]){
                return false;
            }
            map_s[c_s]=i+1;
            map_t[c_t]=i+1;
        }
        return true;

        
    }
};