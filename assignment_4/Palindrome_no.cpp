class Solution {
public:
    bool isPalindrome(int a)
    {
        int y=a;
        long rev=0;
        while(y>0)
        {
            rev =(y%10)+ (rev*10);
            y=y/10;
        }
        if(rev==a)
        {
            return true;
        }   
    return false;   
    }
};
