class Solution {
    int kadanesMax(vector<int>& nums){
        int sum=nums[0],maxSum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(sum+nums[i],nums[i]);
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
    int kadanesMin(vector<int>& nums){
        int sum=nums[0],minSum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=min(sum+nums[i],nums[i]);
            minSum=min(minSum,sum);
        }
        return minSum;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int maxSum=kadanesMax(nums);
        int minsum=kadanesMin(nums);
        int circularsum=sum-minsum;
        if(maxSum>0) return max(maxSum,circularsum);
        return maxSum;
    }
};