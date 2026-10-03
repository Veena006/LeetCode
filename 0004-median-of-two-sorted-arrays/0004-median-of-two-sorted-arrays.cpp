class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
    int totalSize = nums1.size();
        
        // 3. Calculate median based on even or odd size
        if (totalSize % 2 != 0) {
            // Odd size: return the exact middle element
            return nums1[totalSize / 2];
        } else {
            // Even size: return the average of the two middle elements
            return (nums1[(totalSize / 2) - 1] + nums1[totalSize / 2]) / 2.0;
        }
    }
};
