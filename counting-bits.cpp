class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num);
        ans.push_back(0);
        if(num==0) 
            return ans;
        
        for(int i=1;i<=num;i++){
            if(i%2==0){
                ans[i]=ans[i/2];
            } else {
                ans[i]=ans[i-1]+1;
            }
        }
        return ans;
    }
};
