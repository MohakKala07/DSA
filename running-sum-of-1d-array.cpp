class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int sum1=0;
        vector<int> sum;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                sum1+=nums[j];
            }
            sum.push_back(sum1);
            sum1=0;
        }
        return sum;
    }
};
