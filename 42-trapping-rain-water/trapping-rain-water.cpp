class Solution {
public:
    int trap(vector<int>& height) {
           int n= height.size();
           if(n==0)return 0;
           int max_left=0;
           int max_right=0;
           vector<int>left;
           vector<int>right;
           int water=0;

           for(int i =0;i <n;i++){
                max_left=max(max_left,height[i]);
                left.push_back(max_left);
           }
           for(int i =n-1;i>=0;i--){
                max_right=max(max_right,height[i]);
                right.push_back(max_right);
           }
           reverse(right.begin(), right.end());
           for(int i =0;i<n;i++){
                water+=min(left[i],right[i])-height[i];
           }
            return water;
    }
};