class Solution {
public:
    int maxArea(vector<int>& nums) {
        int low=0;
        int n= nums.size();
        int high= n-1;
        int curr_water=0;
        int water=0;

        while(low<high){
            curr_water=min(nums[low],nums[high])* (high-low);
            water=max(curr_water,water);
            if(nums[low] < nums[high]){
                low++;
            }
            else{
                high--;
            }
            
        }
        return water;
    }
};