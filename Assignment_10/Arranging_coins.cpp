class Solution {
public:
    int arrangeCoins(int n) {
        int a=0 ;
        long lo = 0;
        long hi = n;
		
        while(lo<=hi){
            long mid = (lo+hi)/2;
            
            long b = (mid*(mid+1))/2;
            
            if(n==b){
                a=mid;
                return a;
            }
            
            else if(n<b){
                a=mid-1;
                hi=mid-1;
            }
            
            else if(n>b){
                lo=mid+1;
            }
        }
        return a;
    }
};
