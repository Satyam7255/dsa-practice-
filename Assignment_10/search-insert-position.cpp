class Solution {
public:
    int searchInsert(vector<int>& A, int target) {

        int lo=0;
        int hi=A.size()-1;
        int an;
        
            
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            
            if(A.at(mid)==target)                 
            {
                return mid;
            }
            if (A.at(mid)<target)
            {  
              lo = mid +1;
            }
            else 
            {
              hi = mid-1;
                
            }
        } 
            
        
        return lo;
    }
};
