class Solution {
public:
    bool isPerfectSquare(int num)
    {
    int lo = 1 ;
    int hi = num ;
    int  mid ; 
    long temp;
        
     if(num==1)
            return true;
     if(num==0)
            return false;    
        
    while(lo <= hi)
    {
        long mid = (lo + (hi - lo) / 2);
        temp = mid * mid;
        
        if(temp == num){
            return true;
        }
        if(temp < num){
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return false;    
    }
};
