class Solution {
public:
    int reverse(int a)
    {
     int pot = 1;
    long long rev = 0;
    if (a<0){
        pot = -1;
        a = abs(a);
    }
    while(a>0)  
    {
      rev = rev*10 + a%10;
        a = a/10;
    }
    if (rev>INT_MAX){
        return 0;
    }
    return rev*pot;   
        
    }
};
