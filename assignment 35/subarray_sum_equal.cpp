class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            int n=nums.size();
        int count=0;
        //rt(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+nums[j];
                if(sum==k)
                {
                    count++;
                }
            }
        }
        return count;
        
