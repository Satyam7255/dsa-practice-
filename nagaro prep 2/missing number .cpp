class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size()-1;
        int min= nums[0];
        int max= nums[n];
        int mis;
        for(int i=0; i<=n; i++){
            if(i!=nums[i]){
                mis=i;
                break;
            }
            else{
                nums.push_back(i+1);
            }
        }
        return mis;
    }
};
