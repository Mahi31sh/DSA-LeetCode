class Solution {
public:
    bool isAnagram(string s, string t) {
        int n= s.size();
        int m= t.size();
        if(n!=m)return false;
        unordered_map<char, int>a;
        unordered_map<char,int>b;
        for(int i =0;i<n;i++){
            a[s[i]]++;
        }
        for(int i=0;i<n;i++){
            b[t[i]]++;
        }
        for(int i =0;i<n;i++){
            if(a[s[i]]!=b[s[i]]) return false;
        }
        return true;
    }
};