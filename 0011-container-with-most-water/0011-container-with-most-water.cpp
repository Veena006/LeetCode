class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int n=height.size();
        int j=n-1;
        int Max=0;
        while(i<j){
            int area=min(height[i],height[j])*(j-i);
            Max=max(Max,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return Max;
    }
};