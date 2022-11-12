class Solution {
public:
int kAlgo(vector<int>& nums)
{
    int maxCurr=nums[0];
    int maxAll=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        maxCurr=max(nums[i],maxCurr+nums[i]);
        maxAll = max(maxAll,maxCurr);
    }
    return maxAll;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_normal =kAlgo(nums);
        if(max_normal<0)
        return max_normal;
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum += nums[i];
        int res1=kAlgo(nums);
        for(int i=0;i<nums.size();i++)
            nums[i]=-1*nums[i];
        int res2 = kAlgo(nums);
        return max(res1,(sum+res2));
    }
};
