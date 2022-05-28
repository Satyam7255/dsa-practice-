class Solution {
public:
    int binarySearch(int x)
{
    int lo = 1 ;
    int hi = x / 2 ;
    int  mid , ans;
    long temp;
        
    while(lo <= hi)
    {
        long mid = (lo + (hi - lo) / 2);
        
        temp = mid * mid;
        
        if(temp  == x)
            return mid;
        else if(temp < x)
            ans = mid ,lo = mid + 1;
        else
            hi = mid - 1;
    }
    return ans;
}
int mySqrt(int x)
{
    if(x <= 1)
        return x;
    return binarySearch(x);
}
};
