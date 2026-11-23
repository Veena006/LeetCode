class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count=0;
        int pre=0;
        unordered_map<int,int> s;
        s[0]=1;
        for(int num: nums){
            pre+=num;
            if(s.find(pre-k)!=s.end()){
                count+=s[pre-k];
            }
            s[pre]++;
        }
       return count;
    }
};