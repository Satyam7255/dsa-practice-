class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int max= INT_MAX;
        int curr = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                curr=curr+nums[j];
                if(curr<max){
                    max=curr;
                }
            }
        }
        return max;
    }
};
