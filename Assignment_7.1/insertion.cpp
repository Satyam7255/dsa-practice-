class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    int  j,a;
    int n = nums.size();
   
    
    for(int i=1;i<n;i++)
    {
         a = nums[i];
         j=i-1;
        while (j>=0 && nums[j]>a)
        {
            nums[j+1]=nums[j];
          
            j--;
        }    
        nums[j+1]=a;
      
    }
  return nums;

}    
    
};
