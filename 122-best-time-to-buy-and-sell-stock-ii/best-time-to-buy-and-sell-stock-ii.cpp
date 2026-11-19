class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int low=0;
        int high= low+1;
        int profit=0;
        while(high<nums.size()){
            if(nums[low]>nums[high]){
                low=high;
                high++;
            }
            else if(nums[low]<=nums[high]){
                while(high+1<nums.size() && nums[high]<=nums[high+1]){
                    high++;
                }
                profit+=nums[high]-nums[low];
            
            low=high+1;
            high=low+1;
            }
        }
        return profit;
    }
};