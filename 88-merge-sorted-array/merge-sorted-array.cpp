class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int low=0;
        int end=m-1;
        while(low<n){
            swap(nums1[end+1],nums2[low]);
            low++;
            end++;
        }
        return sort(nums1.begin(), nums1.end());
    }
};