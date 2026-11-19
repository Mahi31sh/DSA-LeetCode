class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (auto i: nums){
            mp[i]++;
        }
        int mine=*min_element(nums.begin(),nums.end());
        int maxe=*max_element(nums.begin(),nums.end());
        int i =0;
        for(int num=mine;num<=maxe;num++){
            while(mp[num]>0){
                nums[i]=num;
                i++;
                mp[num]--;
            }
        }
        return nums;

    }
};