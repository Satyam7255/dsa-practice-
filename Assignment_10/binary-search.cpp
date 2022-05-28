class Solution {
public:
    int search(vector<int>& A, int target) {
        int lo=0;
        int hi=A.size()-1;
        int ans;    
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            
            if(A.at(mid)==target)                 
            {
                return mid;
            }
            else if (A.at(mid)>target)
            {
              hi = mid-1;
    
            }
            else 
            {
             lo = mid +1;
                
            }
        } 
            
        
        return -1;
    }
};
