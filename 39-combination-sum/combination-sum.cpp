class Solution {
public:
    void func(vector<int>&nums, int n, int idx,vector<int>&diary, vector<vector<int>>&res, int target, int sum){
        if(sum==target){
            res.push_back(diary);
            return;
        }
        if(sum > target)return;

        for(int i=idx; i<n;i++){
            diary.push_back(nums[i]);
            sum+=nums[i];
            func(nums,n,i,diary,res,target,sum);
            sum-=nums[i];
            diary.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int idx=0;
        int sum=0;
        vector<int>diary;
        vector<vector<int>>res;
        func(candidates,n,idx,diary,res,target,sum);
        return res;
    }
};