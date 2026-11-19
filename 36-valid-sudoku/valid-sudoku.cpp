class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& nums) {
        
        for(int i =0;i<9;i+=3){
            for(int j =0;j<9;j+=3){
                unordered_map<int,int>mp;
                for(int a =0;a<3;a++){
                    for(int b=0;b<3;b++){
                        if(nums[i+a][j+b]=='.')continue;
                        else{
                            mp[nums[i+a][j+b]]++;
                        }
                        if(mp[nums[i+a][j+b]]>1)return false;
                    }
                }
                
                
            }
        }
        for(int i =0;i<9;i++){
            unordered_map<int,int>mp;
            for(int j =0;j<9;j++){
                        if(nums[i][j]=='.')continue;
                        else{
                            mp[nums[i][j]]++;
                        }
                if(mp[nums[i][j]]>1)return false;
            }
        }
        for(int i =0;i<9;i++){
            unordered_map<int,int>mp;
            for(int j =0;j<9;j++){
                
                        if(nums[j][i]=='.')continue;
                        else{
                            mp[nums[j][i]]++;
                        }
        
                if(mp[nums[j][i]]>1)return false;
            }
        }
        return true;

    }
};