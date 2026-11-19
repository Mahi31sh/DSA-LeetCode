class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        int n= nums.size();
        int ans=0;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i =1;i<n;i++){
            if(nums[i]==nums[i-1])continue;
            if(nums[i-1]+1==nums[i]){
                count++;
            }
            
            else{
                ans=max(ans,count);
                count=1;
            }

            
        }
        return max(ans,count);;
            
    }
};