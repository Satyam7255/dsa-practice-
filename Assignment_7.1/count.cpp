class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        int r = max - min + 1;
        int n = nums.size();
        vector<int> A1(r), A2(n);
        for (int i = 0; i < n; i++)
            A1[nums[i] - min]++;

        for (int i = 1; i < r; i++)
            A1[i] += A1[i - 1];

        for (int i = n - 1; i >= 0; i--) {
            A2[A1[nums[i] - min] - 1] = nums[i];
            A1[nums[i] - min]--;
        }
        return A2;

    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////  another way, was showing run time error   ////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
    {
          int l=nums.size();
  vector<int> A1(100);
  for (int i=0;i<nums.size();i++)
  {
      A1[nums[i]]++;
  }
  vector<int> A2(l);
  int a=0;
  for (int i=0;i<100;i++)
  {
      while(A1[i]>0)
      {
          A2[a]=i;
          A1[i]--;
          a++;
      }
  }
  
  return A2;     
    }
};
