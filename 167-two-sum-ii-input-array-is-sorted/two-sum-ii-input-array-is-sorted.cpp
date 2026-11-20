class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low=0;
        int n= nums.size();
        int high= n-1;
        vector<int>ans;

        while(low<=high){
            int sum= nums[low]+nums[high];

            if(sum>target){
                high--;
            }
            else if(sum<target){
                low++;
            }
            else if(sum== target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                low++;
                high--;
                return ans;
            }
        }
        return ans;
    }
};