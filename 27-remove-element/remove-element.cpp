class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low=0;
        int n= nums.size();
        int high=n-1;

        while( low<high){
            if(nums[low]!=val&& nums[high]==val){
                low++;
                high--;
            }
            else if(nums[low]!=val&& nums[high]!=val){
                low++;
            }
            else if(nums[low]==val&& nums[high]!=val){
                swap(nums[low], nums[high]);
                low++;
                high--;
            }
            else if(nums[low]==val && nums[high]==val)high--;
            
        }
        return (low == high && nums[low] != val) ? low + 1 : low;
    }
};